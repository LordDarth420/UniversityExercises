#include <stdio.h>
#include <stdlib.h>
int vowelsCount(char*);
int main()
{
   char s1[200];
   scanf("%[^\n]s", s1);
   printf("Vowels: %d", vowelsCount(s1));
}
int vowelsCount(char* s1)
{
    char vowels[5] = "aeiou";
    int i = 0, cnt = 0;
    while(s1[i] != '\0')
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] += 32;
        }
        for(int j = 0; j < 5; j++)
        {
            if(s1[i] == vowels[j])
            {
                cnt++;
                break;
            }
        }
        i++;
    }
    return cnt;
}
