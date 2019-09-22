#include<stdio.h>
char stack[100];
int top=-1;
void push(char ch)
{
    stack[++top]=ch;
}
char pop()
{
    return stack[top--];
}
int main(void)
{
    char str[100];
    int index[100];
    int ii=0;
    int i=0;
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&&str[i]!='u')
        {
            push(str[i]);
            index[ii++]=i;
        }
        i++;
    }
     for(int k=0;k<ii;k++)
     {
         str[index[k]]=pop();
     }

     printf("%s",str);
    return 0;
}
