#include<stdio.h>
void main()
{
    int arr[5],i;
    printf("\nEnter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("You have entered: %d \n",arr[i]);
    }
}