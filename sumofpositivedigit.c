#include<stdio.h>
void main()
{
    int n,a;
     int sum=0;
    printf("Enter a positive digit number ");
    scanf("%d",&n);
 while(n>0)
 {  
       
      a=n%10;
      sum=a+sum;
      n=n/10;
}
      
    printf("The sum of positive digit number is %d ",sum);
 
    
}