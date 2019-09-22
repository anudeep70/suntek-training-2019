//1. Write a program to find the frequency of characters in a given string.
//Eg: aabcdacddb
//Output: a - 3
// b - 2
// c - 2
// d - 3
//Expected no of days for solving this question: 1

#include<stdio.h>
int main(void)
{
    char str[100];
    scanf("%s",str);
    int i=0;
     //    for(int z=0;str[z]!='';z++)
     //  {
    //  printf("%c ",str[z]);
   // }
   int count;
    while(str[i]!='\0')
    {
        int flag=0;
        for(int j=i-1;j>=0;j--)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
           {
        count=0;
        for(int k=i;str[k]!='\0';k++)
        {
            if(str[i]==str[k])
            {
                count++;
            }
        }
        printf("%c - %d\n",str[i],count);

    }
    i++;
    }
    return 0;
}
