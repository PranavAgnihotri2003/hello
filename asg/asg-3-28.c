#include <stdio.h>
int main()
{
    int i, numbers[5], total = 0, count = 0;
    float average;
    printf("\nInput the first number:");
    scanf("%d", &numbers[0]);
    printf("\nInput the second number:");
    scanf("%d", &numbers[1]);
    printf("\nInput the third number:");
    scanf("%d", &numbers[2]);
    printf("\nInput the fourth number:");
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number:");
    scanf("%d", &numbers[4]);
    for (i = 0; i < 5; i++)
    {
        if (numbers[i] > 0)
        {
            count++;
            total += numbers[i];
        }
    }
    average = total / count;
    printf("\n The number of positive numbers:%d\n", count);
    printf("\n The average of all positive value is %.2f\n", average);
    return 0;
}