#include<stdio.h>
void main()
{
    int dist,fuel,avg;
    printf("Enter total distance ");
    scanf("%d",&dist);
    printf("Enter the liters comsumed ");
    scanf("%d",&fuel);
    avg=dist/fuel;
    printf("\nthe avg consumtion is %d ",avg);

}