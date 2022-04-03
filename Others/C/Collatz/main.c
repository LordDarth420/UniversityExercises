#include <stdio.h>
#include <stdlib.h>
#define PRINT printf("%d\n", n)
void collatz(int);
int main()
{
    int n;
    scanf("%d", &n);
    collatz(n);
    return 0;
}
void collatz(int n)
{
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n /= 2;
            PRINT;
        }
        else
        {
            n *= 3;
            n += 1;
            PRINT;
        }
    }
}
