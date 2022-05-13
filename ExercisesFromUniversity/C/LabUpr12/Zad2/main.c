#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    double nums[10] = {1.5, 2.3, 5.6, 7.8, 3.2, 1.4, 8.7, 9.4, 6.5, 2.9};
    double num;
    int index;
    fp = fopen("file.bin", "wb+");
    if(fp == NULL)
    {
        perror("Error creating/opening file!");
        exit(-1);
    }
    if(fwrite(nums, sizeof(nums), 1, fp) != 1)
    {
        printf("Error writing array!");
    }

    printf("What Nth number do you want to print here?\n");
    scanf("%d", &index);
    fseek(fp, (index - 1)*sizeof(double), SEEK_SET);
    fread(&num, sizeof(double), 1, fp);
    fclose(fp);
    printf("%0.1f", num);


}
