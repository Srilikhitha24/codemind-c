#include<stdio.h>
int main( )
{
    int N,i,sum=0,oddsum=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        if(i%2==0)
        sum+=arr[i];
        else
        oddsum+=arr[i];
    }
    int diff=sum-oddsum;
    int d=oddsum-sum;
    if(diff>0)
    {
        printf("%d",diff);
    }
    else printf("%d",d);
}