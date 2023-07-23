#include <stdio.h>

void main()
{
    int second, hours, min, sec;

    printf("Enter number of seconds: ");
    scanf("%d", &second);

    hours = second / 60;

    min = (second - hours * 60) / 60;

    sec = (second - hours * 60 - min * 60);

    printf("hours = %d", hours);
    printf("\nminutes = %d", min);
    printf("\nseconds = %d", sec);
}