/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
//Problem:Deleting an element from array
int main()
{
    int A[20];
    int i,j,n,x,num;
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    printf("please enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&A[i]);
    }
    printf("A={");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("}");
    printf("\nPlease enter the element that you want to delete:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==A[i])
        {
            break;
        }
    }
    for(j=i;j<n-1;j++)
        {
            A[j]=A[j+1];
        }
    n--;
    printf("The array after deleting the element of %d:",num);
    printf("\nA={");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("}");
    return 0;
}

