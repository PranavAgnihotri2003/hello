#include <stdio.h>
void main()
{
    int arr[4], square;
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the numbers ");
        scanf("%d", arr);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            square = arr[i] * arr[i];
        }
        printf("The square is %d", square);
    }
}