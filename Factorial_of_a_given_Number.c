#include<stdio.h>
int main( )
{
    int i,n,count=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      count=count*i;
    }
    printf("%d",count);
}