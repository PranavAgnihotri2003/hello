#include <stdio.h>
int main()
{
    int arr[5], max = 0, pos = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the integers ");
        scanf("%d", &arr);
    }
    for (int j = 0; j < 6; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            pos = j;
        }
    }
    printf("Highest value: %d\nPosition: %d\n", max, pos);
    return 0;
}