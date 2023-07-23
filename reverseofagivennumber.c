#include <stdio.h>
void main()
{
    int a;

    printf("Enter numbers to reverse ");

    scanf("%d", &a);

    int r;
    int s = 0;
    while (a != 0)
    {

        r = a % 10;
        s = s * 10 + r;
        a = a / 10;
    }
    printf("%d", s);
}
