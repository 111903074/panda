/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
//Problem:upper and lower triangular of the matrix
int main()
{
    int A[10][10];
    int i,j;
    int n;
    printf("Enter the rows of the matrix:");
    scanf("%d",&n);
     printf("Enter the column of the matrix:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    printf("A[%d][%d]=\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The upper triangular matrix of above matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("0 ");
        }
        for(j=i;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The lower triangular matrix of above matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",A[i][j]);
        }
        for(j=n-i-1;j>0;j--)
        {
            printf("0 ");
        }
        printf("\n");
    }


}

