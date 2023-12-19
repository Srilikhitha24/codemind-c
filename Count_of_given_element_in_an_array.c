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
    int count=0,a;
    scanf("%d",&a);
    for(i=0;i<N;i++)
    {
        if(a==arr[i])
        count++;

    }
    printf("%d",count);
}