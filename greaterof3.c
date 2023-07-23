#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three numbers A B C you want to compare ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&& a>c)
    {
        printf("A is the greatest number ");
    }
    if (b>a && b>c)
    {
        printf("B is the greatest number ");
    }
    if (c>a && c>b)
    {
      printf("C is the greatest number ");
    }
 }