#include <stdio.h>
#include <stdlib.h>
int smallNum(int n,int k,int arr[n][k]);
int bigNum(int n,int k,int arr[n][k]);
void printM(int n,int k,int dm[n][k]);

int main()
{
    int n,k,i,j,rowBig,rowSmall;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Enter K: ");
    scanf("%d",&k);
    int arr[n][k];
    printf("Enter elements of the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("Element[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    rowBig = bigNum(n,k,arr);
    rowSmall = smallNum(n,k,arr);
    for(i=0;i<n;i++)
    {
        int t = arr[rowBig][i];
        arr[rowBig][i] = arr[rowSmall][i];
        arr[rowSmall][i] = t;
    }
    printM(n,k,arr);

    return 0;
}
void printM(int n,int k,int dm[n][k])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("%d ",dm[i][j]);
        }
        printf("\n");
    }
}
int bigNum(int n,int k,int dm[n][k])
{
    int bigNum = 0;
    int i,j;
    int big = dm[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(big < dm[i][j]){
                big = dm[i][j];
                bigNum = i;
            }
        }
    }
    return bigNum;
}

int smallNum(int n,int k,int dm[n][k])
{
    int lowNum = 0;
    int i,j;
    int small = dm[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(small > dm[i][j]){
                small = dm[i][j];
                lowNum = i;
            }
        }
    }
    return lowNum;
}
