#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool areRowsAscending(int n, int m, int matrix[n][m]);
bool areColumnsDescending(int n, int m, int matrix[n][m]);
int main()
{
    int n, m;
    bool rowsAscend, colsDescend;
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
    rowsAscend = areRowsAscending(n, m, matrix);
    colsDescend = areColumnsDescending(n, m, matrix);
    printf("All rows ascending: %s\tAll columns descending: %s", rowsAscend ? "true" : "false", colsDescend ? "true" : "false");
}
bool areRowsAscending(int n, int m, int matrix[n][m])
{
    bool result = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m - 1; j++)
        {
            if(matrix[i][j] > matrix[i][j + 1])
            {
                result = false;
            }
        }
    }
    return result;
}
bool areColumnsDescending(int n, int m, int matrix[n][m])
{
    bool result = true;
    for(int i = 0; i < n - 1; i++)
    {
        if(matrix[i][0] < matrix[i + 1][0])
        {
            result = false;
        }
    }
    return result;
}
