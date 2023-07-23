#include<stdio.h>

void prime( ){
    int n;
    int c=0;
    for (int i = 0; i < n; i++)
    {
if(n%i==0){
    c++;
}  
  }
  if(c==2){
    printf("It is a prime number ");
  }
  else{
    printf("not a prime number ");
  }
    
}
void main()
{
   
int x;   printf("Enter the no.");
   scanf("%d",x);
   prime(x);
   printf("%d",prime);

}
    


