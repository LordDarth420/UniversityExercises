#include <stdio.h>
#include <stdlib.h>
#define NEWLINE printf("\n")
int MaxSum(int **, int);
int main()
{
    int rows, columns;
    int **matrix;
    int *sums;
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &columns);
    matrix = (int**)malloc(rows*sizeof(int*));
    sums =(int*)malloc(rows*sizeof(int));
    for(int i = 0; i < rows; i++)
    {
        matrix[i] = (int*)malloc(columns*sizeof(matrix[i]));
        for(int j = 0; j < columns; j++)
        {
            printf("matrix[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    NEWLINE;
    for(int i = 0; i < rows; i++)
    {
        int sum = 0;
        for(int j = 0; j <= columns; j++)
        {
            if(j == columns)
            {
                printf("%d", sum);
                sums[i] = sum;
            }
            else
            {
                sum += matrix[i][j];
                printf("%d ", matrix[i][j]);
            }
        }
        NEWLINE;
    }
    NEWLINE;
    printf("Max sum is: %d", MaxSum(&sums, rows));
}
int MaxSum(int **sums, int n)
{
    int max = (*sums)[0];
    for(int i = 0; i < n; i++)
    {
        if(max < (*sums)[i])
        {
            max = (*sums)[i];
        }
    }
    return max;
}
