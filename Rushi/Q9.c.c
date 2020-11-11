/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
#include<string.h>
//Problem:
int main()
{
    int len=0,i;
    char str1[80],str2[80],str3[80];
    printf("Enter the string:\n");
    gets(str1);
    gets(str2);
    int x=strlen(str1);//lenght of the str1
    int y=strlen(str2);//lenght of the str2
    printf("The lenght of the str1 and str2 is %d and %d respectively\n",x,y);
    for(i=1;i<=80;i++)
    {
        if(i%5==0)
        {
            printf("*");
        }
        else
        {
            printf("-");
        }
    }
    printf("\ncomparison of two strings:\n");
    int z1=strcmp(str2,str1); //comparison between str1 wrt str2
    if(z1>0)
    {
        printf("str2 is greater than str1\n");
    }
    if(z1<0)
    {
        printf("str1 is greater than str2\n");
    }
    printf("The copy of str1 into str3 is str3::%s\n",strcpy(str3,str1));//copying  of the string into another string
    printf("The cancatation of str2 and str1 is::%s\n",strcat(str2,str1));
    for(i=1;i<=80;i++)
    {
        if(i%5==0)
        {
            printf("*");
        }
        else
        {
            printf("-");
        }
    }
    while(str1[len]!='\0')
    {
        len++;
    }
    printf("\nThe lenght of the str1 is %d",len);
    printf("\nThe reverse of the str1 is:");
    for(i=len;i>=0;i--)
    {
        printf("%c",str1[i]);
    }
    printf("\n");
    for(i=1;i<=80;i++)
    {
        if(i%5==0)
        {
            printf("*");
        }
        else
        {
            printf("-");
        }
    }
    printf("\n");
    int S,E;
    printf("Substring of string:\n");
    printf("Enter the starting position from where you want to print the substring:");
    scanf("%d",&S);
    printf("Enter the ending position upto where you want to print the substring:");
    scanf("%d",&E);
    printf("The substring corresponding to the entered location:\n");
    for(i=S-1;i<E;i++)
    {
        printf("%c",str1[i]);
    }
	return 0;
}
