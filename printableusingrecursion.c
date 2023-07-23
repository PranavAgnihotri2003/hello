#include <stdio.h>
int printtable(int n, int i)
{
    if (i > 10)
    {
        return;
    }
    printf("\n%d*%d=%d", n, i, n * i);
    return printtable(n, i + 1);
}
void main()
{
    int num;
    printf("Enter the number whose table you want to print on the screen ");
    scanf("%d", &num);
    printtable(num, 1);
}