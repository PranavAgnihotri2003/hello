#include <stdio.h>
void main()
{
    int a, b, c, sum = 0;
    printf("Enter  the 1st value ");
    scanf("%d", &a);
    printf("\nEnter  the 2nd value ");
    scanf("%d", &b);
    printf("\nEnter  the 3rd value ");
    scanf("%d", &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        printf("It is a traingle ");
    }
    else
    {
        printf("Not a traingle ");
    }

    if (a + b > c && b + c > a && c + a > b)
    {
        sum = a + b + c;
    }
    printf("%d", sum);
}