#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main()
{
	int num1, num2;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	if (num1 == num2)
	{
		printf("Numbers are equal!");
	}
	else
	{
		printf("Bigger number is %d!\n", returnBigger(num1, num2));
		printf("Smaller number is %d!", returnSmaller(num1, num2));
	}

	return 0;
}

int returnBigger(int a, int b)
{
	if (a > b) { return a; }
	else if (a == b) { return NULL; }
	else { return b; }
}
int returnSmaller(int a, int b)
{
	if (a < b) { return a; }
	else if (a == b) { return 0; }
	else { return b; }
}