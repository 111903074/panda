/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
//Problem:sum of the elements of each row and column
int main()
{
    int A[10][10];
    int i,j;
    int x1,x2;
    int n,m;
    printf("Enter the rows of the matrix:");
    scanf("%d",&n);
     printf("Enter the column of the matrix:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&A[i][j]);
    }
    printf("A[%d][%d]=\n",n,m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        x1=0;
        for(j=0;j<m;j++)
        {
            x1=x1+A[i][j];
        }
        printf("sum of element of row %d =%d\n",i+1,x1);
    }
     for(j=0;j<m;j++)
    {
        x2=0;
        for(i=0;i<n;i++)
        {
            x2=x2+A[j][i];
        }
        printf("sum of elements of column %d =%d\n",j+1,x2);
    }
}

