#include <stdio.h>
#include <stdlib.h>
int firstAndLastDigitSum(int);
int main()
{
    int num, sum;
    scanf("%d", &num);
    if(num >= 10)
    {
        sum = firstAndLastDigitSum(num);
        printf("Sum of first and last digit is: %d", sum);
    }
    else {printf("Your number has only one digit.");}
    return 0;
}
int firstAndLastDigitSum(int num)
{
    int firstDigit = num;
    while(firstDigit >= 10)
    {
        firstDigit /= 10;
    }
    int lastDigit = num % 10;
    return firstDigit + lastDigit;
}
