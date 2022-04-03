#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int n, sum = 0;
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        sum += ptr[i];
    }
    printf("Sum of all elements is: %d", sum);
}
