#include<stdio.h>
void main()
{
    int n,product=0;
    printf("Enter a no. ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
      product=n*i;
      printf("\n %d*%d=%d",n,i,product);
    }
    
}