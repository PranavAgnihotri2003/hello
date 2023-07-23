#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter a no. ");
    scanf("%d",&n);
    for (int i = n; i>= 1; i--)
    {
    fact=fact*i;
      
    }
    printf("\n%d",fact);
    
}