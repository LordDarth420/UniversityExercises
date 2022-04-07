#include <stdio.h>
#include <stdlib.h>
int strLength(char*);
int main()
{
    char s1[80];
    scanf("%[^\n]s", s1);
    printf("%d", strLength(s1));

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

