#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2, *ptr3;
    int n;
    scanf("%d", &n);
    ptr1 = (int*) malloc(n*sizeof(int));
    ptr2 = (int*) malloc(n*sizeof(int));
    ptr3 = (int*) malloc(n*sizeof(int));

    printf("Array 1:\n");
    for(int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &ptr1[i]);
    }

    printf("Array 2:\n");
    for(int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &ptr2[i]);
    }
    printf("Array 3:\n");
    for(int i = 0; i < n; i++)
    {
        ptr3[i] = ptr1[i] + ptr2[i];
        printf("%d ", ptr3[i]);
    }

}
