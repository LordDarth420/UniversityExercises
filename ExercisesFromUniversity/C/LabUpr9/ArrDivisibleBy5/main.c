#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr, *divisibleFive;
    scanf("%d", &n);;
    ptr = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    int count = 0;
    divisibleFive = (int*)malloc((count + 1)*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        if(ptr[i] % 5 == 0)
        {
            divisibleFive[count] = ptr[i];
            count++;
            divisibleFive = (int*)realloc(divisibleFive, (count + 1)*sizeof(int));
        }
    }
    printf("\n");
    if(count == 0)
    {
        printf("There are no numbers divisible by 5 in your array.");
    }
    else
    {
        printf("The numbers from your array that are divisible by 5 are:\n");
        for(int i = 0; i < count; i++)
        {
            printf("%d ", divisibleFive[i]);
        }
    }

}
