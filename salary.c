#include<stdio.h>

void salary(int x)
{
    int tax;
    
     if(x>10000)
    {
      tax=.18*x;
      printf("tax is rs %d",tax);
    }
    
   else if((x>5000)||(x<=10000))
    {
      tax=.15*x;
      printf("tax is rs %d",tax);
    }

   else{
    tax=.1*x;
    printf("tax is rs %d",tax);
   }
   }
   void main()
   {
    int sal;
    printf("Enter the slary of the employee ");
    scanf("%d",&sal);
    salary(sal);
   }