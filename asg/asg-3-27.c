#include<stdio.h>
void main()
{
    int arr[4],c,d;
    printf("Enter 5 numbers irrespective of negative and positive ");
    scanf("%d",arr);
    for(int i=0;i<=5;i++)
    {
    if(arr[i]>0)
    {
        c++;

    }
    else
    {
        d++;

    }

    }
    int z=d;
    int x=c;
    printf("The number of positive numbers are %d",x);
    printf("The number of positive numbers are %d",z);
}