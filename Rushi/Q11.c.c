/*
File name:
Author name:Sanap Rushikesh Vinod
*/

#include<stdio.h>
//Problem:
int main(){
    char str[200];
    int d = 0,c=0, count[26] = {0}, count1[26]={0};
    printf("Enter a string : ");
    gets(str);
    //Considering lower case characters
    while(str[c] != '\0'){
        if (str[c] >= 'a' && str[c] <= 'z'){
            count[str[c] - 'a']++;
        }
        c++;
    }
    //Considering upper case characters
    while(str[d] != '\0'){
        if (str[d] >= 'A' && str[d] <= 'Z'){
            count1[str[d] - 'A']++;
        }
        d++;
    }
    for (c=0; c<26; c++){       //count of lower case letters
        if(count[c]==0)
            printf("");
        else
            printf("Frequency of %c = %d\n",c + 'a',count[c]);
    }
    for (d=0; d<26; d++){
        if(count1[d]==0)
            printf("");
        else
            printf("Frequency of %c = %d\n",d + 'A',count1[d]);
    }
    return 0;
}
