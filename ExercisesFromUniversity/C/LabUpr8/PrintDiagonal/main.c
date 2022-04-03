#include <stdio.h>
#include <stdlib.h>

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
    printf("Diagonal of matrix is:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", matrix[i][i]);
    }
}
