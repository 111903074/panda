/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
#include<string.h>
//Problem:conversion of uppercase to lowercase and viceversa of the string
int main()
{
    char str[200];
    int i;
    printf("\nEnter any string::");
    gets(str);

    printf("\nThe input String is::%s\n",str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("\nThe Converted String is::%s\n",str);
    return 0;
}
