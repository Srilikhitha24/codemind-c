#include<stdio.h>
int main( )
{
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,flag=0;
    for(i=0;i<N;i++)
    {
        sum+=arr[i];
    }
    int avg=sum/N;
    for(i=0;i<N;i++)
    {
        if(arr[i]==avg)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)printf("False");
    else printf("True");
}