#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void allLetterCount(char*, int);
int strLength(char*);
bool containsInArray(int*, int, int);
void mySort(int *, int);
int main()
{
	char s1[200];
	scanf("%[^\n]s", s1);
    printf("\n");
    allLetterCount(s1, strLength(s1));

}
void allLetterCount(char* s1, int n)
{
    /*
    function saves the char and its count in a dynamic array with format
    [(ASCII value of char 1), count, (ASCII value of char 2), count...,(ASCII value of char n], count].
    checks if char is not already stored in the array before counting, if the letter is a whitespace or if it is a letter at all.
    afterwards we sort the array by letter, extract the information from the array and we print it.
    */
    int *arr, k = 0;
    arr = (int*)calloc(k + 2, sizeof(int));
    for(int i = 0; i < n; i++)
    {
        int cnt = 1;
        if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            //converts uppercase letter to lowercase, so things can be easier
            s1[i] += 32;
        }
        if(!containsInArray(arr, k + 2, s1[i]) && s1[i] != ' ' && s1[i] >= 'a' && s1[i] <= 'z')
        {
            for(int j = 0; j < n; j++)
            {
                if(s1[i] == s1[j] && i != j)
                {
                    cnt++;
                }
            }
            arr[k] = s1[i];
            arr[k + 1] = cnt;
            k += 2;
            arr = (int*)realloc(arr, (k + 2)*sizeof(int));
        }
    }
    mySort(arr, k + 2);
    for(int i = 0; i < (k - 1); i += 2)
    {
        printf("%c: %d\n", arr[i] - 32, arr[i + 1]);
    }
}
int strLength(char* s1)
{
    int cnt = 0;
    while(s1[cnt] != '\0')
    {
        cnt++;
    }
    return cnt;
}
bool containsInArray(int* arr, int n, int number)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == number)
        {
            return true;
        }
    }
    return false;
}
void mySort(int *arr, int n)
{
    for(int i = 0; i < n - 2; i += 2)
    {
        for(int j = 0; j < n - 2; j += 2)
        {
            if(arr[i] < arr[j])
            {
                //b 3 a 2
                //swaps letters and then their counts
                //a 2 b 3
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                int temp2 = arr[i + 1];
                arr[i + 1] = arr[j + 1];
                arr[j + 1] = temp2;
            }
        }
    }
}
