#include<stdio.h>
int main( )
{
    int n,year;
    scanf("%d",&year);
    n=year%100;
    if(n>9){
        printf("%d",n);
    }
    else
    {
        printf("0%d",n);
    }
}