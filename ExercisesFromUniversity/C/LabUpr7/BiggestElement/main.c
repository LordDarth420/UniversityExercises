#include <stdio.h>
#include <stdlib.h>
int biggestElement(int*);
int main()
{
    int nums[7], max;
    for(int i = 0; i < 7; i++)
    {
        scanf("%d", &nums[i]);
        while(nums[i] < -100 || nums[i] > 100)
        {
            printf("Number is not between -100 and 100!\n");
            scanf("%d", &nums[i]);
        }
    }
    max = biggestElement(nums);
    printf("Biggest element is: %d", max);
    return 0;
}
int biggestElement(int nums[7])
{
    int max = nums[0];
    for(int i = 0; i < 7; i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}
