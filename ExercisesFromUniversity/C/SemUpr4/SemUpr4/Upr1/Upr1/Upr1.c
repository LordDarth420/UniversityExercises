#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
	int n;
	printf("N = ");
	scanf_s("%d", &n);
	int nums[MAX];
	for (int i = 0; i < n; i++)
	{
		int num;
		printf("Number %d = ", i + 1);
		scanf_s("%d", &num);
		nums[i] = num;
	}

	//sort
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (nums[j] > nums[i])
			{
				int temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
			}

		}
	}
	printf("Sorted list:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
	}
	int k = 0, cnt = 1;
	int beginningOfSquare[MAX];
	int lengthOfSquare[MAX];
	for (int i = 0; i < n;)
	{
		cnt = 1;
		if (nums[i] == nums[i + 1])
		{
			cnt++;
			int j = i + 2;
			while (nums[i] == nums[j])
			{
				cnt++;
				j++;
			}
			beginningOfSquare[k] = i;
			lengthOfSquare[k] = cnt;
			k++;
			i = j;
		}
		else { i++; }
	}
	int max = lengthOfSquare[0], indexOfMax = beginningOfSquare[0];
	if (k != 0)
	{
		for (int i = 0; i < k; i++)
		{
			if (lengthOfSquare[i] > max)
			{
				max = lengthOfSquare[i];
				indexOfMax = beginningOfSquare[i];
			}
		}
		printf("\nBiggest square length: %d\nBeginning index of longest square: %d", max, indexOfMax + 1);
	}
	else
	{
		printf("\nThere are no squares.");
	}
	
	
	//4 4 4 4 15 6 5
}