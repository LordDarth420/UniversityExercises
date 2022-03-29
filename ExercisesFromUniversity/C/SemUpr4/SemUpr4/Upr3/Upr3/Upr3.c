#include <stdio.h>
#include <stdlib.h>
#define MAX 20
void swap(int *, int *);
void reverseOrder(int *, int);
int main()
{
	int n;
	int nums[MAX];
	printf("N = ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num;
		printf("Number %d = ", i + 1);
		scanf("%d", &num);
		nums[i] = num;
	}
	reverseOrder(nums, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", nums[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverseOrder(int nums[], int n)
{
    int j = n - 1;
    for (int i = 0; i < n;)
    {
        //swaps until it reaches middle element if the number of elements is odd
        while (i != j && n % 2 != 0)
        {
            swap(&nums[i], &nums[j]);
            i++;
            j--;
        }
        //swaps until the indexes are one apart from each other if the number of elements is even
        while (j != i + 1 && n % 2 == 0)
        {
            swap(&nums[i], &nums[j]);
            i++;
            j--;
        }
        break;
	}
}
