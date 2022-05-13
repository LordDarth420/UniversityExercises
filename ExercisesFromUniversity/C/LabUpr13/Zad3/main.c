#include <stdio.h>
#include <stdlib.h>
int countSentences(FILE *fr);
int countWords(FILE *fr);
int main()
{
    FILE *fr;
    fr = fopen("text.txt", "r");
    if(fr == NULL)
    {
        perror("Error: ");
        exit(-1);
    }
    printf("Words: %d\tSentences: %d", countWords(fr), countSentences(fr));
    fclose(fr);

}

int countSentences(FILE *fr)
{
    fseek(fr, 0, SEEK_SET);
    char c, nextChar;
    int sentenceCount = 1;
    while(1)
    {
        c = fgetc(fr);
        if(c == EOF)
        {
            break;
        }
        if(c == '.' || c == '!' || c == '?')
        {
            nextChar = fgetc(fr);
            if(nextChar == ' ' || nextChar == '\n')
            {
                sentenceCount++;
                fseek(fr, -1, SEEK_CUR);
            }
        }
    }
    return sentenceCount;
}
int countWords(FILE *fr)
{
    fseek(fr, 0, SEEK_SET);
    char c;
    int wordCount = 1;

    while(1)
    {
        if(c == EOF)
        {
            break;
        }
        c = fgetc(fr);
        if(c == ' ' || c == '\n')
        {
            wordCount++;
            while(c == ' ' || c == '\n')
            {
                c = fgetc(fr);
            }

        }
        if(c == '-')
        {
            c = fgetc(fr);
            while(c == ' ' || c == '\n')
            {
                c = fgetc(fr);
            }
        }
    }
    return wordCount;
}
