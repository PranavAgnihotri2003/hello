#include<stdio.h>
void main()
{
    int sum=0,num,temp=0;
    printf("Enter a positive number ");
    scanf("%d",&num);
    temp=num%10;
    sum=sum+temp;
    num=num/10;
    
    printf("sum of n digit positive integer is %d ",sum);
}