#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void printMatrix(int n, int[][n]);
bool checkIfLastRowHasNegative(int n, int[][n]);
int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("matrix[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    bool negative = checkIfLastRowHasNegative(n, matrix);
    if(negative)
    {
        printf("Multiplying time!\n\n");
        int j = n - 1;
        for(int i = 0; i < n; i++)
        {
            matrix[i][j] *= 3;
            j--;
        }
    }
    printMatrix(n, matrix);
    return 0;
}

bool checkIfLastRowHasNegative(int n, int matrix[][n])
{
    bool negative = false;
    for(int j = 0; j < n; j++)
    {
        if(matrix[n - 1][j] < 0)
        {
            negative = true;
            break;
        }
    }
    return negative;
}
void printMatrix(int n, int matrix[][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


