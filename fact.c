#include <stdio.h>
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}
void main()
{
    int num;
    printf("Enter the number whose factorial that you want to print ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, fact(num));
}