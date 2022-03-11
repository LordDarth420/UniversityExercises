#include <stdio.h>
#include <stdlib.h>

int checkIfPrime(int);
void printAllPrimes(int, int);

int main()
{
    int n1, n2;
    scanf("%d\n%d", &n1, &n2);
    printf("All prime numbers between %d and %d are:\n", n1, n2);
    printAllPrimes(n1, n2);
    return 0;
}

int checkIfPrime(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void printAllPrimes(int n1, int n2)
{
    int isPrime;
    for (int i = n1 + 1; i < n2; i++)
    {
        isPrime = checkIfPrime(i);
        if(isPrime == 1)
        {
            if(i < (n2 - 1)){printf("%d, ", i);}
            else {printf("%d", i);}
        }
    }
}
