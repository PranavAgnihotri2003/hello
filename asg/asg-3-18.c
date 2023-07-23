#include <stdio.h>

void main()
{
    int days, years, months, days1;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;

    months = (days - years * 365) / 30;

    days1 = (days - years * 365 - months * 30);

    printf("Years = %d", years);
    printf("\nMonths = %d", months);
    printf("\nDays = %d", days1);
}