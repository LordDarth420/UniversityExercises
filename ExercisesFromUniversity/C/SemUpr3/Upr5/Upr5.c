#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t1, t2, t3;
	scanf_s("%d\n%d\n%d", &t1, &t2, &t3);
	SumTime(t1, t2, t3);
	return 0;
}
void SumTime(int t1, int t2, int t3)
{
	int minutes = 0, seconds = 0;
	seconds = t1 + t2; 
	if (seconds >= 60)
	{
		seconds -= 60;
		minutes += 1;
	}
	seconds += t3;
	if (seconds >= 60)
	{
		seconds -= 60;
		minutes += 1;
	}
	if (seconds < 10) { printf("%d:0%d", minutes, seconds); }
	else { printf("%d:%d", minutes, seconds); }
}
