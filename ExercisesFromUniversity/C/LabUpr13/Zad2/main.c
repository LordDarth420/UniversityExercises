#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int n, output;
    FILE *fw, *fr;
    fw = fopen("numbers.bin", "wb");
    if(fw == NULL)
    {
        perror("Error: ");
        exit(-1);
    }
    for(int i = 0; i < 50; i++)
    {
        int num = rand() % 13; //numbers from 1 to 12 num = rand() % (upper - lower + 1) + lower
        fseek(fw, i*sizeof(int), SEEK_SET);
        fwrite(&num, sizeof(int), 1, fw);
    }
    printf("Numbers written to numbers.bin!\n");
    fclose(fw);

    fr = fopen("numbers.bin", "rb");
    if(fr == NULL)
    {
        perror("Error: ");
        exit(-1);
    }

    printf("Which Nth number do you want to view?:\n");
    scanf("%d", &n);
    if(!(n >= 1 && n <= 50))
    {
        printf("n is not in range!");
        exit(-1);
    }
    fseek(fr, (n - 1)*sizeof(int), SEEK_SET);
    fread(&output, sizeof(int), 1, fr);
    fclose(fr);
    printf("Your number is: %d", output);


}
