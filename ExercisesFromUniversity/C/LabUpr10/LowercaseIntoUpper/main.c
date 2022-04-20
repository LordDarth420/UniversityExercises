#include <stdio.h>
#include <stdlib.h>
void lowerToUpper(char*);
int main()
{
    char s1[200];
    scanf("%[^\n]s", s1);
    lowerToUpper(s1);
    printf("%s", s1);
    return 0;
}
void lowerToUpper(char *s1)
{
    int i = 0;
    while(s1[i] != '\0')
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] -= 32;
        }
        i++;
    }
}
