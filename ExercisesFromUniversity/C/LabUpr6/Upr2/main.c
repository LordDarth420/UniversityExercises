#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);
int main()
{
    int a = 10, b = 5;
    swap(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
