/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
//Problem:
int main()
{
    int A[20];
    int i,j,n,x,pos;
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
    printf("\nPlease enter the location(between 1 to %d) of the element that you want to delete:",n);
    scanf("%d",&pos);
    if(pos<0 || pos>=n)
    {
        printf("Sorry you have entered the wrong location!!!");
        exit(0);
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            A[i]=A[i+1];
        }
        n--;

    }
    printf("The array after deleting the element of position %d:",pos);
    printf("\nA={");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("}");
    return 0;
}
