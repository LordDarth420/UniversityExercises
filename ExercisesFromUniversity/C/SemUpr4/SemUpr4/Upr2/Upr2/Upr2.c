#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main()
{
	int n, areRelationsTrue = 1;
	int nums[MAX];
	printf("N = ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num;
		printf("Number %d = ", i + 1);
		scanf_s("%d", &num);
		nums[i] = num;
	}

	for (int i = 0; i < n - 1; i++)
	{
		if (i % 2 == 0)
		{
			if (nums[i] > nums[i + 1])
			{
				areRelationsTrue = 0;
			}
		}
		else
		{
			if (nums[i] < nums[i + 1])
			{
				areRelationsTrue = 0;
			}
		}
	}
	if (areRelationsTrue == 0)
	{
		printf("The relation required is not met.");
	}
	else
	{
		printf("The relation required is met.");
	}
}