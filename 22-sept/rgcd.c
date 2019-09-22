
#include<stdio.h>

int gcd(int dis,int div)
{
    if(div%dis==0)
    {
        return dis;
    }
    return gcd(div%dis,dis);
}
int main(void)
{

    int div,dis;
    int ans;
    scanf("%d %d",&div,&dis);
    if(dis>div)
    {
        int temp=div;
        div=dis;
        dis=temp;
    }
    ans=gcd(dis,div);
    printf("%d",ans);
    return 0;
}
