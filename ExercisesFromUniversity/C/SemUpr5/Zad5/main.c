#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void addElement(int, int *, int);
void deleteElement(int, int *, int);
int smallestByN(int, int *, int);
void printArray(int *, int);
bool strCompare(char *,char *);
int strLength(char* s1);
int main()
{
    //not finished
    char commands[12];
    int *arr, len = 1;
    scanf("%s", commands);

    arr = (int*)calloc(1, sizeof(int));
    while(!strCompare(commands,"end"))
    {
        char command[9], number[15];
        int i = 0, k = 0;
        while(commands[i] != '(')
        {
            command[i] = commands[i];
            i++;
        }
        i++;
        while(commands[i] != ')')
        {
            number[k] = commands[i];
            i++;
            k++;
        }
        int element = atoi(number);
        if(strCompare(command,"add"))
        {
            addElement(element, arr, len - 1);
            len++;
            arr = (int*)realloc(arr, len*sizeof(int));
        }
        else if(strCompare(command,"delete"))
        {
            deleteElement(element, arr, len);
            len--;
            arr = (int*)realloc(arr, len*sizeof(int));
        }
        else if(strCompare(command,"smallest"))
        {
            printf("%d number is: %d", element, smallestByN(element, arr, len));
        }
        else if(strCompare(command,"print"))
        {
            printArray(arr, len);
        }
        else
        {
            printf("Wrong command!\n");
        }
        scanf("%s", commands);
    }
}


void addElement(int x, int *arr , int index)
{
    arr[index] = x;
    printf("Element %d added!\n", x);
}
void deleteElement(int x, int *arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        if(arr[i] == x)
        {
            for(int j = i - 1; j < len - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }
    printf("Element %d deleted!\n", x);
}
int smallestByN(int n, int *arr, int len)
{
    int tempArr[len];
    for(int i = 0; i < len; i++)
    {
        tempArr[i] = tempArr[i];
    }

    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(tempArr[i] > tempArr[j])
            {
                int temp = tempArr[i];
                tempArr[i] = tempArr[j];
                tempArr[j] = temp;
            }
        }
    }
    return tempArr[n - 1];
}
void printArray(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
bool strCompare(char* s1, char* s2)
{
    bool equals = true;
    if(strLength(s1) == strLength(s2))
    {
        int n = strLength(s1);
        for(int i = 0; i < n; i++)
        {
            if(s1[i] != s2[i])
            {
                equals = false;
                break;
            }
        }
        return equals;
    }
    else{equals = false; return equals;}
}
int strLength(char* s1)
{
    int cnt = 0;
    while(s1[cnt] != '\0')
    {
        cnt++;
    }
    return cnt;
}

