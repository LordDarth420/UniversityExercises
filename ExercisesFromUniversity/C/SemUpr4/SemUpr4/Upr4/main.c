#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    printf("n = ");
    scanf("%d", &n);
    int nums[n], newArr[n];
    for(int i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("k = ");
    scanf("%d", &k);
    for(int i = 0; i < n; i++)
    {
        int temp = i + k;
        while(temp >= n)
        {
            temp -= n;
        }
        newArr[temp] = nums[i];
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", newArr[i]);
    }
    //2 3 4 5 // k = 2 //4 5 2 3

}
