#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("a = ");
    scanf("%d", &a);
    changeNum(&a);
    printf("a = %d", a);
}
void changeNum(int *x)
{
    if(*x < 1000)
    {
        *x *= 10;
    }
    else if(*x == 1000)
    {
        *x += 10;
    }
    else
    {
        *x /= 10;
    }
}
