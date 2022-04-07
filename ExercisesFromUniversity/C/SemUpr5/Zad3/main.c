#include <stdio.h>
#include <stdlib.h>
int rowWhereMax(int n, int m, int matrix[n][m]);
int rowWhereMin(int n, int m, int matrix[n][m]);
void printMatrix(int n, int m, int matrix[n][m]);
int main()
{
    int n, m, rowMax, rowMin;
    scanf("%d", &n);
    scanf("%d", &m);
    int matrix[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("matrix[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    rowMax = rowWhereMax(n, m, matrix);
    rowMin = rowWhereMin(n, m, matrix);
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[rowMax][i];;
        matrix[rowMax][i] = matrix[rowMin][i];
        matrix[rowMin][i] = temp;
    }
    printMatrix(n, m, matrix);
}
int rowWhereMax(int n, int m, int matrix[n][m])
{
    int rowWhereMax = 0;
    int max = matrix[0][0];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(max < matrix[i][j])
            {
                max = matrix[i][j];
                rowWhereMax = i;
            }
        }
    }
    return rowWhereMax;
}
int rowWhereMin(int n, int m, int matrix[n][m])
{
    int rowWhereMin = 0;
    int min = matrix[0][0];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(min > matrix[i][j])
            {
                min = matrix[i][j];
                rowWhereMin = i;
            }
        }
    }
    return rowWhereMin;
}
void printMatrix(int n, int m, int matrix[n][m])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
