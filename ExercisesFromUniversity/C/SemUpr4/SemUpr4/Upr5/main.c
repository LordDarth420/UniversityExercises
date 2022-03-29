#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    printf("n = ");
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("k = ");
    scanf("%d", &k);
    while(k < 0 || k > n)
    {
        printf("k cannot be negative or higher than array length!\n");
        printf("k = ");
        scanf("%d", &k);
    }
    //sort array then pick what k element the user wants from there
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    //remove duplicates
    int unique[n], cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int duplicate = 0;
        for(int j = 0; j < n; j++)
        {
            if(nums[i] == unique[j] && i != j)
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate == 0)
        {
            unique[cnt] = nums[i];
            cnt++;
        }
    }
    if(k > cnt)
    {
        printf("Hmm... There are not so many unique numbers in your array. Here's the lowest number:\n");
        printf("%d", unique[cnt - 1]);
    }
    else
    {
        printf("%d", unique[k - 1]);
    }
    return 0;

}
