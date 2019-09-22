//2. Write a program to check if two strings are anagrams. Two strings are said to be anagrams when the frequency count
// of characters in both the strings is the same.
//
//Eg : aaabbbccc and abcabcabc are anagarams as the frequency count of every character in string1 is equal to that
// in string2.
#include<stdio.h>
int main(void)
{
    char str[100],str1[100];
    scanf("%s",str);
    scanf("%s",str1);
    int i=0;
     //    for(int z=0;str[z]!='';z++)
     //  {
    //  printf("%c ",str[z]);
   // }
   int count,count1,k;
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
        count1=0;
        for(k=i;str[k]!='\0';k++)
        {
            if(str[i]==str[k])
            {
                count++;
            }
        }
         for(k=0;str1[k]!='\0';k++)
        {
            if(str[i]==str[k])
            {
                count1++;
            }
        }

        if(count!=count1)
        {
            printf("not anagrams");
            break;
        }

    }
    i++;
    }
    for(i=1;str[i]!='\0';i++)
        {
        }
     for(k=1;str1[k]!='\0';k++)
        {
        }
        if(i==k)
            printf("anagram");
    return 0;
}
