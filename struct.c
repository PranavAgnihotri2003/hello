#include <stdio.h>
struct data
{
    int date;
    int month;
    int year;
};
void address( struct data d)
{
    printf("%d//%d//%d",d.date,d.month,d.year);
}
void main()
{
    struct data k;
    printf("Enter the date ");
    scanf("%d",&k.date);
    printf("Enter the month ");
    scanf("%d",&k.month);
    printf("Enter the year ");
    scanf("%d",&k.year);
    address(k);
}
