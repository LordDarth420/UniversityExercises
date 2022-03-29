#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void sort(int *, int);
void printArr(int[], int);
void findLongestSquareAndBeginning(int[], int);
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
	sort(nums, n);
	printf("Sorted list:\n");
	printArr(nums, n);
	findLongestSquareAndBeginning(nums, n);
}

void sort(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] > arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}

		}
	}
}
void printArr(int nums[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
	}
}
void findLongestSquareAndBeginning(int arr[], int n)
{
	int k = 0, cnt = 1;
	int beginningOfSquare[MAX];
	int lengthOfSquare[MAX];
	for (int i = 0; i < n;)
	{
		cnt = 1;
		if (arr[i] == arr[i + 1])
		{
			cnt++;
			int j = i + 2;
			while (arr[i] == arr[j])
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
}