#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        int result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }
}
