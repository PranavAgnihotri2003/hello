#include<stdio.h>
void main()
{
    int arr[5],sum=0,avg,i;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
    sum=sum+arr[i];
    }
    avg=sum/5;
    printf("The sum is %d and avg is %d  ",sum,avg);

}