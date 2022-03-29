#include <stdio.h>
#include <stdlib.h>
#define MAX 20
double averageFromPositiveInts(int*, int);
int main()
{
    int nums[MAX], n;
    double avg;
    printf("n = ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    avg = averageFromPositiveInts(nums, n);
    printf("Average from all positive numbers is: %0.2lf", avg);
}
double averageFromPositiveInts(int nums[], int n)
{
    int sum, cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(nums[i] > 0)
        {
            sum += nums[i];
            cnt++;
        }
    }
    return (double) sum / cnt;
}
