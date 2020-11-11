/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
//Problem:addition,substraction and multiplicatiion of matrix
int main()
{
    int A[10][10];
    int i,j;
    int n,sum=0;
    printf("Enter the rows of the matrix:");
    scanf("%d",&n);
     printf("Enter the column of the matrix:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    printf("\nA[%d][%d]=\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sum=sum+A[i][i];
    }
    printf("\n");
    printf("sum of the diagonal elements of the matrix A[%d][%d]=%d",n,n,sum);
	return 0;
}
