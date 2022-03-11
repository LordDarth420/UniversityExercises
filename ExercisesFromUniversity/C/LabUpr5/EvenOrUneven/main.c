#include <stdio.h>
#include <stdlib.h>
int evenOrUneven(int);
int main()
{
    int num;
    scanf("%d", &num);
    int even = evenOrUneven(num);
    if (even == 1)
    {
        printf("%d is even.", num);
    }
    else { printf("%d is odd.", num);}
    return 0;
}

int evenOrUneven(int num)
{
    int temp = 0;
    if (num % 2 == 0)
    {
        temp = 1;
    }
    return temp;
}
