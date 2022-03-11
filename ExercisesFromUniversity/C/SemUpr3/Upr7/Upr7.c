#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	char time;
	printf("How many km?\n");
	scanf_s("%d", &n);
	printf("Day or Night?(d/n)\n");
	scanf_s(" %c", &time, 1);
	FindCheapestPrice(n, time);
	return 0;
}

void FindCheapestPrice(int n, char time)
{
	double taxiPrice = 0.70, busPrice = 0, trainPrice = 0;
	switch (time)
	{
		case 'd':
			taxiPrice += (0.79 * n);
			break;
		case 'n':
			taxiPrice += (0.90 * n);
			break;
	}
	if (n >= 20)
	{
		busPrice += (0.09 * n);
	}
	if (n >= 100)
	{
		trainPrice += (0.06 * n);
	}

	
	if (busPrice == 0 && trainPrice == 0)
	{
		printf("Taxi, %0.2lflv", taxiPrice);
	}
	else if (trainPrice == 0)
	{
		if (busPrice < taxiPrice)
		{
			printf("Bus, %0.2lflv", busPrice);
		}
		else
		{
			printf("Taxi, %0.2lflv", taxiPrice);
		}
	}
	else
	{
		if (taxiPrice < busPrice && taxiPrice < trainPrice)
		{
			printf("Taxi, %0.2lflv", taxiPrice);
		}
		else if (busPrice < trainPrice)
		{
			printf("Bus, %0.2lflv", busPrice);
		}
		else
		{
			printf("Train, %0.2lflv", trainPrice);
		}
	}
}
