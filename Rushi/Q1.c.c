/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
#include<limits.h>
//Problem:
int main()
{
    int A[20],n,i,j;
    int max1,max2;
    float avg;
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
    max1=max2=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(A[i]>max1)
        {
            max2=max1;
            max1=A[i];
        }
        else if(A[i]>max2 && A[i]<max1)
        {
            max2=A[i];
        }
    }
    avg=(max1+max2)/2.0;
    printf("\nThe average of the largest and second largest number is %0.2f",avg);
    return 0;
}
