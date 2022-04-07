#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void strCompare(char*, char*);
int strLength(char* s1);
int main()
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    strCompare(s1, s2);
}
void strCompare(char* s1, char* s2)
{
    if(strLength(s1) == strLength(s2))
    {
        bool equals = true;
        for(int i = 0; i < strLength(s1); i++)
        {
            if(s1[i] != s2[i])
            {
                equals = false;
                break;
            }
        }
        printf("Strings are %s", equals ? "equal." : "not equal.");
    }
    else
    {
        printf("Strings are not equal.");
    }
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
