#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("niki.txt", "r");
    if(fp == NULL)
    {
        perror("File not found!");
        exit(-1);
    }
    while(fgets(str, sizeof(str), fp))
    {
        printf("%s", str);
    }
    fclose(fp);
}
