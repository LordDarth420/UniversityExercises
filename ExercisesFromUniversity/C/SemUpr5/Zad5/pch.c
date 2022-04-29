#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "pch.h"

void Commander(char *command, int argument, int *nums, int *numsCount, bool argumentIsNum)
{
    if(strcmp("add", command) == 0)
    {
        if(argumentIsNum)
        {
            Add(argument, nums, numsCount);
        }
        else{printf("Argument is incorrect!\n\n");}
    }
    else if(strcmp("delete", command) == 0)
    {
        if(argumentIsNum)
        {
            Delete(argument, nums, numsCount);
        }
        else{printf("Argument is incorrect!\n\n");}
    }
    else if(strcmp("smallest", command) == 0)
    {
        if(argumentIsNum && argument <= *numsCount)
        {
            printf("%d\n\n", SmallestNth(argument, nums, numsCount));
        }
        else{printf("Argument is incorrect!\n\n");}
    }
    else if(strcmp("print", command) == 0)
    {
        Print(nums, numsCount);
    }
    else{printf("Wrong command!\n\n");}
}
void Add(int argument, int *nums, int *numsCount)
{
    nums[(*numsCount)++] = argument;
    nums = (int*)realloc(nums,((*numsCount) + 1)*sizeof(int));
    Print(nums, numsCount);
}
void Delete(int argument, int *nums, int *numsCount)
{
    for(int i = 0; i < *numsCount; i++)
    {
        while(nums[i] == argument)
        {
            //2 3 4 6
            nums[i] = 0;
            for(int j = i; j < (*numsCount) - 1; j++)
            {
                nums[j] = nums[j + 1];
                nums[j + 1] = 0;
            }
            (*numsCount)--;
            nums = (int*)realloc(nums, (*numsCount + 1)*sizeof(int));
        }
    }
    Print(nums, numsCount);
}
int SmallestNth(int n, int *nums, int *numsCount)
{
    int arr[*numsCount];
    for(int i = 0; i < *numsCount; i++)
    {
        arr[i] = nums[i];
    }
    for(int i = 0; i < *numsCount; i++)
    {
        for(int j = 0; j < *numsCount; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[n - 1];
}
void Print(int *nums, int *numsCount)
{
    for(int i = 0; i < *numsCount; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n\n");
}
