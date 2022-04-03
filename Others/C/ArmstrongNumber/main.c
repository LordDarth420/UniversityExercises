#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 30
int myPow(int, int);
bool ArmstrongNumber(int);
int main()
{
    int num;
    scanf("%d", &num);
    bool armstrong = ArmstrongNumber(num);
    if(armstrong)
    {
        printf("Your number %d is an Armstrong number!", num);
    }
    else {printf("Your number %d is not an Armstrong number!", num);}
    return 0;

}
int myPow(int x, int n)
{
    int result = 1;
    for(int i = 0; i < n; i++)
    {
        result *= x;
    }
    return result;
}
bool ArmstrongNumber(int num)
{
    int digitsCount = 0, sum = 0, temp = num, digits[MAX];
    while(temp != 0)
    {
        int digit = temp % 10;
        digits[digitsCount] = digit;
        digitsCount++;
        temp /= 10;
    }
    for(int i = 0; i < digitsCount; i++)
    {
        sum += myPow(digits[i], digitsCount);
    }
    if (num == sum) {return true;}
    else {return false;}
}
