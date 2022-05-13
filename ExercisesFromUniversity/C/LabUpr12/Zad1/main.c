#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int a;
    double b;
    char c[50];
    fp = fopen("file.txt", "w+");
    if(fp == NULL)
    {
        perror("Error!");
        exit(-1);
    }

    fprintf(fp, "%d %lf %s", 1, 2.5, "nik");
    rewind(fp);

    fscanf(fp, "%d %lf %s", &a, &b, c);
    fclose(fp);
    printf("%d %lf %s", a, b, c);

}
