#include<stdio.h>
void main()
{
    long int arr [5];int c=0,i;
    printf("Enter the salaries: ");
    {
    for(i=0;i<=5;i++)
    
        scanf("%d",arr[i]);
        arr[i]*12;
    
     if(arr[i]>100000)
     c++;
   }
    printf("total number of employees earning more than 1 lakh is: %d",c);
}