#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main()
{
	int hour, minutes;
	scanf("%d", &hour);
	scanf("%d", &minutes);
	if (hour >= 0 && hour < 24 && minutes >= 0 && minutes < 60)
	{
		minutes += 15; //1:50 + 15 = 65 minutes - 60 hour + 1 = 2:05
		if (minutes >= 60)
		{
			minutes -= 60;
			hour += 1;
			if (hour >= 24)
			{
				hour -= 24;
			}
		}
	}
	if (minutes < 10)
	{
		printf("%d:0%d", hour, minutes);
	}
	else
	{
		printf("%d:%d", hour, minutes);
	}
	return 0;
}


