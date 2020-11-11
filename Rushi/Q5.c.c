/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
//Problem:addition subtraction and multiplication of two matrix
int main()
{
    int A[10][10],B[10][10],C[10][10],M[10][10];
    int i,j,k;
    int x1,x2;
    int m,n,p,q,sum;
    printf("Enter the rows of the matrix A:");
    scanf("%d",&m);
    printf("Enter the columns of the matrix B:");
    scanf("%d",&n);
    printf("Enter the rows of the matrix B:");
    scanf("%d",&p);
    printf("Enter the columns of the matrix B:");
    scanf("%d",&q);
    printf("Enter the elements of the first matrix A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    printf("Enter the elements of the second matrix B:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            scanf("%d",&B[i][j]);
    }
    if(m==p && n==q)
    {
         for(i=0;i<m;i++)
         {
            for(j=0;j<n;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
            }
         }
         printf("The addition of two matrices:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d  ",C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The addition of the matrices A and B does not exist\n");
    }
    if(m==n && n==q)
    {
         for(i=0;i<m;i++)
         {
            for(j=0;j<n;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
            }
         }
         printf("The subtraction of two matrices:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d  ",C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The subtraction of the matrices A and B does not exist\n");
    }

    if(n==p)
    {
        for(i=0;i<m;i++)
        {

            for(j=0;j<q;j++)
            {
                sum=0;
                for(k=0;k<n;k++)
                {
                    sum=sum+A[i][k]*B[k][j];
                }
                M[i][j]=sum;
            }
        }
        printf("The multiplication of two matrix is:\n\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d   ",M[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication of the matrix is not possible.");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            C[j][i]=A[i][j];
        }
    }
    printf("\nTranspose of the matrix A:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
    int max=A[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]>max)
            {
                max=A[i][j];
            }
        }
    }
    printf("The saddle point of the matrix A:%d",max);
    return 0;
}
