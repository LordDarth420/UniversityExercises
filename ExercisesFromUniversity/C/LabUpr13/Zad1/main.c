#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fw, *fr;
    char str[50], output[200];

    fw = fopen("strings.txt", "w");
    if(fw == NULL)
    {
        perror("Can't open file!");
        exit(-1);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("String %d: ", i + 1);
        scanf("%s", str);
        fputs(str, fw);
        if(i != 4){fputs(" ", fw);}
    }

    fclose(fw);

    fr = fopen("strings.txt", "r");
    if(fr == NULL)
    {
        perror("Can't open file!");
        exit(-1);
    }
    printf("\nContents of strings.txt:\n");
    fgets(output, 500, fr);

    printf("%s", output);

}
