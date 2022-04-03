#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int n, n2;
    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    scanf("%d", &n2);
    if(n2 > n)
    {
        ptr = realloc(ptr, n*sizeof(int));
        for(int i = n; i < n2; i++)
        {
            printf("Element %d: ", i + 1);
            scanf("%d", &ptr[i]);
        }
        for(int i = 0; i < n2; i++)
        {
            printf("%d ", ptr[i]);;
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]);;
        }
    }
}
