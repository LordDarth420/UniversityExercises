#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double x1, x2, y1, y2, x, y;
	scanf_s("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &x1, &x2, &y1, &y2, &x, &y);
	if (x1 > x2 || y1 > y2)
	{
		printf("Invalid input");
	}
	else
	{
		IsPointInside(x1, x2, y1, y2, x, y);
	}
}
void IsPointInside(double x1, double x2, double y1, double y2, double x, double y)
{
	if (x > x1 && x < x2 && y > y1 && y < y2)
	{
		printf("Inside");
	}
	else
	{
		printf("Outside");
	}
}