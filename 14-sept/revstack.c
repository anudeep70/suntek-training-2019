#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<n;k++)
        printf("%d ",1);
        for(int j=1;j<=i;j++)
    {
        printf("%d ",j);
    }
     for(int j=i-1;j>1;j--)
    {
        printf("%d ",j);
    }
    for(int k=i;k<=n;k++)
    printf("%d ",1);
    printf("\n");
    }
     for(int i=n-1;i>0;i--)
    {
        for(int k=i;k<n;k++)
        printf("%d ",1);
        for(int j=1;j<=i;j++)
            printf("%d ",j);
 for(int j=i-1;j>=1;j--)
    {
        printf("%d ",j);
    }
    for(int k=i;k<n;k++)
        printf("%d ",1);
        printf("\n");
    }
    return 0;

}
