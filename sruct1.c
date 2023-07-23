#include<stdio.h>
#include<conio.h>
struct distance
{
    int meter,cm;

};
struct distance add(struct distance m1,struct distance m2)
{
  struct distance m3;
  m3.meter=m1.meter+m2.meter;
  m3.cm=m1.cm+m2.cm;
  return m3;
}
void display()
{ 
    struct distance d1,d2,d3;
    printf("\nEnter the distance in meter ");
    scanf("%d",&d1.meter);
    printf("\nEnter the distance in centimeter ");
    scanf("%d",&d1.cm);
    printf("\nEnter the 2nd distance in meter ");
    scanf("%d",&d2.meter);
    printf("\nEnter the 2nd distance in cm ");
    scanf("%d",&d2.cm);
    d3=add(d1,d2);
    printf("\nThe total distance in meter  is %d ",d3.meter);
    printf("\nthe total distance in cm is %d",d3.cm);
}