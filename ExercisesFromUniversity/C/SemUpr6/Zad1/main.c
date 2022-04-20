#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

typedef struct Birthday
{
    int visitors;
    double chairPrice, tablePrice, cupPrice, platePrice;
    int tableCount, chairCount, cupsCount, platesCount;
    double totalPrice;
} Birthday;
int main()
{
    int n;
    scanf("%d", &n);
    Birthday birthDay = {.visitors = n,
                        .chairPrice = 13.99,
                        .tablePrice = 42.00,
                        .cupPrice = 0.997,
                        .platePrice = 3.503,
                        .tableCount = 0,
                        .chairCount = 0,
                        .cupsCount = 0,
                        .platesCount = 0,
                        .totalPrice = 0};
    char command[MAX];
    scanf("%s", command);
    while(strcmp(command, "PARTY!") != 0)
    {
        if(strcmp(command, "Table") == 0)
        {
            birthDay.tableCount++;
        }
        else if(strcmp(command, "Chair") == 0)
        {
            birthDay.chairCount++;
        }
        else if(strcmp(command, "Cups") == 0)
        {
            birthDay.cupsCount += 6;
        }
        else if(strcmp(command, "Dishes") == 0)
        {
            birthDay.platesCount += 6;
        }
        else
        {
            printf("Wrong command!\n");
        }
        scanf("%s", command);
    }
    birthDay.totalPrice = (birthDay.tableCount * birthDay.tablePrice) + (birthDay.chairCount * birthDay.chairPrice)
    + (birthDay.cupsCount * birthDay.cupPrice) + (birthDay.platesCount * birthDay.platePrice);
    printf("%0.2lf\n", birthDay.totalPrice);
    if(n - (birthDay.tableCount * 8) > 0)
    {
        int defaultTableCount = birthDay.tableCount;
        while(n - (birthDay.tableCount * 8)  > 0)
        {
            birthDay.tableCount++;
        }
        printf("%d Tables\n", birthDay.tableCount - defaultTableCount);
    }

    if(n > birthDay.chairCount)
    {
        printf("%d Chairs\n", n - birthDay.chairCount);
    }
    if(n > birthDay.cupsCount)
    {
        int i = 0;
        while(n > birthDay.cupsCount)
        {
            birthDay.cupsCount += 6;
            i++;
        }
        printf("%d Cups\n", i);
    }
    if(n > birthDay.platesCount)
    {
        int i = 0;
        while(n > birthDay.platesCount)
        {
            birthDay.platesCount += 6;
            i++;
        }
        printf("%d Plates", i);
    }

    return 0;
}
