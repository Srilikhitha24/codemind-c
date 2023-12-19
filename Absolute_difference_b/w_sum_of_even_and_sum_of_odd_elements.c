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
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
        else oddsum+=arr[i];
    }
    int diffe=sum-oddsum;
    int d=oddsum-sum;
    if(diffe>0)printf("%d",diffe);
    else printf("%d",d);
    
}