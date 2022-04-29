#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "pch.h"
int main()
{
    int *nums, argument, numsCount = 0;
    char commands[15];
    scanf(" %[^\n]s", commands);

    nums = (int*)malloc((numsCount + 2)*sizeof(int));
    while(strcmp(commands, "end") != 0)
    {
        bool isNum = false;
        int i = 0, numCnt = 0;
        char *number, command[10];
        number = (char*)calloc(numCnt + 1, sizeof(char));
        //adds command to separate array
        while(commands[i] != '(' && commands[i] != '\0')
        {
            command[i] = commands[i];
            i++;
        }
        //adds '\0' character, so that strcmp in the Commander© works correctly
        command[i++] = '\0';
        /*adds number to a sepasrate dynamic array (because we don't know how long the number is going to be),
         then with atoi string is converted into int*/
        while(commands[i] != ')' && commands[i] != '\0')
        {
            number[numCnt++] = commands[i];
            number = (char*)realloc(number, (numCnt + 1)*sizeof(char));
            i++;
        }
        bool minusIsRead = false;
        //check if argument is actually a number
        for(int i = 0; i < numCnt; i++)
        {
            if(number[i] >= 48 && number[i] <= 57)
            {
                isNum = true;
            }
            else if(number[0] == 45 && !minusIsRead)
            {
                minusIsRead = true;
            }
            else{isNum = false; break;}
        }
        argument = atoi(number);
        free(number);
        /*command and argument are passed to the Commander©, who processes the request of the user. the arrays are freed
        so that there are no garbage values in the next iteration of this while*/
        Commander(command, argument, nums, &numsCount, isNum);
        scanf(" %[^\n]s", commands);
    }
    return 0;
}
