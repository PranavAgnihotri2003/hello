#include<stdio.h>
void main()
{
    int n,product=1,pow;
    printf("Enter a no. ");
    scanf("%d",&n);
    printf("Enetr the power to the number ");
    scanf("%d",&pow);
    for (int i = pow; i> 0; i--)
    {
  product=product*n;
      
    }
    printf("\n%d",product);
    
}