#include<stdio.h>
int main(void)
{
    int div,dis;
    scanf("%d %d",&div,&dis);
    if(dis>div)
    {
        int temp=div;
        div=dis;
        dis=temp;
    }
    while(div%dis!=0)
    {       int temp=dis;
           dis=div%dis;
           div=temp;

    }
    printf("%d",dis);
}
