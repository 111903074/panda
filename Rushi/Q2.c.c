/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
//Problem:
int main()
{
    int A[20],n,i,j;
    printf("Enter The number of elements of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&A[i]);
    }
    printf("A[%d]={",n);
    for (i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("}");
    printf("\nThe array in reverse order:");
    printf("\nA[%d]={",n);
    for (j=n-1;j>=0;j--)
    {
        printf("%d ",A[j]);
    }
    printf("}");
	return 0;
}
