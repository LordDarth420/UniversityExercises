#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int n, evenCnt = 0, oddCnt = 0;
    scanf("%d", &n);
    int nums[n + 1], binArr[n + 1];
    nums[0] = n;
    for(int i = 1; i < n + 1; i++)
    {
        nums[i] = (rand() % (n + 1)); //(rand() % (upper - lower + 1)) + lower; in our case upper=n, lower=1
    }
    FILE *fp, *fp1;
    fp = fopen("file.bin", "wb");
    if(fp == NULL)
    {
        perror("Error: ");
        exit(-1);
    }
    fwrite(nums, sizeof(nums), 1, fp);
    fclose(fp);

    fp = fopen("file.bin", "rb");
    if(fp == NULL)
    {
        perror("Error: ");
        exit(-1);
    }
    int i = 0, bytesRead = 0, temp;
    while((bytesRead = fread(&temp, sizeof(int), 1,  fp)) > 0)
    {
        fseek(fp, (i++)*sizeof(int), SEEK_SET);
        fread(&temp, sizeof(int), 1, fp);
        if(temp % 2 == 0)
        {
            evenCnt++;
        }
        else{oddCnt++;}
    }
    fclose(fp);



    fp = fopen("file.bin", "rb");
    fread(binArr, sizeof(binArr), 1, fp);
    fclose(fp);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(binArr[i] < binArr[j])
            {
                int t = binArr[i];
                binArr[i] = binArr[j];
                binArr[j] = t;
            }
        }
    }
    fp1 = fopen("sorted.txt", "w+");
    for(int i = 0; i < n; i++)
    {
        if(i == (n - 1))
        {
            fprintf(fp1, "%d\n", binArr[i]);
        }
        else
        {
            fprintf(fp1, "%d ", binArr[i]);
        }
    }
    fprintf(fp1, "Evens: %d\tOdds: %d", evenCnt, oddCnt);
    fclose(fp1);
    printf("Results written to sorted.txt!");
}

