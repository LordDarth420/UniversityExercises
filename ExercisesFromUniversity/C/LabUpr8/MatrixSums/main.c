#include <stdio.h>
#include <stdlib.h>
void sumRowsAndPrintSumsAndMin(int[4][5]);
int Min(int[], int);
int main()
{
    int matrix[4][5];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("matrix[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    sumRowsAndPrintSumsAndMin(matrix);

}
void sumRowsAndPrintSumsAndMin(int matrix[4][5])
{
    int sums[4];
    for(int i = 0; i < 4; i++)
    {
        int sum = 0;
        for(int j = 0; j < 5; j++)
        {
            sum += matrix[i][j];
        }
        sums[i] = sum;
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j <= 5; j++)
        {
            if(j == 5){printf("%d\n", sums[i]);}
            else{printf("%d ", matrix[i][j]);}
        }
    }
    printf("\n");
    printf("Min sum is: %d", Min(sums, 4));
}
int Min(int arr[], int n)
{
    int min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
