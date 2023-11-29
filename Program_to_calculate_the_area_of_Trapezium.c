#include<stdio.h>
int main( )
{
    int base1;
    int base2;
    int base3;
    int height;
    scanf("%d%d%d",&base1,&base2,&height);
    printf("%.4f",((base1+base2)/2.0*height));
}