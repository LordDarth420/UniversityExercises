#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main()
{
	int num;
	double points = 0;
	scanf("%d", &num);
	points = PointsCalculator(num);
	printf("%0.1lf\n%0.1lf", points, num + points);
	return 0;
}
double PointsCalculator(int num)
{
	double points = 0;
	if (num <= 100)
	{
		points = 5;
	}
	else if (num > 100 && num <= 1000)
	{
		points = 0.2 * num;
	}
	else if (num > 1000)
	{
		points = 0.1 * num;
	}

	if (num % 2 == 0)
	{
		points += 1;
	}
	else if (num % 10 == 5)
	{
		points += 2;
	}
	return points;
}
