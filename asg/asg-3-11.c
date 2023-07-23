#include<stdio.h>
void main()
{
    float item1,wieght1,item2,wieght2,avg=0;
    printf("Enter number of items and wieght ");
    scanf("%f %f",&item1,&wieght1);
    printf("Enter number of items and wieght ");
    scanf("%f %f",&item2,&wieght2);
    avg=(wieght1+wieght2)/(item1+item2);
    printf("%f",avg);
}