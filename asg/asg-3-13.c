#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter integer a,b,c ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("A is the greates number ");
    }
    if (b>a&&b>c)
    {
        printf("B is the greatest number ");
    }
    if (c>b&&c>a)
    {
        printf("C is the greatest number ");
    }
    
}