#include<stdio.h>
void main()
{
    int a=0,i;
    int b=1,c;
    
    printf("%d %d ",a,b);
    for ( i=2;i<=10;i++)
    {
    c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
    }
    
}