#include <stdio.h>
#include <stdlib.h>
int wordCount(char*);
int main()
{
    char words[100];
    scanf("%[^\n]s", words);
    printf("Words count: %d", wordCount(words));
    return 0;
}
int wordCount(char* words)
{
    int i = 0, count = 0;
    while(words[i] != '\0')
    {
        if(words[i] == ' ')
        {
            count++;
            i++;
            //skips spaces and doesn't count them as words
            while(words[i] == ' ')
            {
                i++;
            }
        }
        else{i++;}
    }
    count++;
    return count;
}
