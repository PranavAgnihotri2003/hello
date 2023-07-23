#include <stdio.h>
int main()
{
    int arr[4], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d integer ", i + 1);
        scanf("%d", &arr);
    }
    for (int j = 0; j < 5; j++)
    {
        if ((arr[j] % 2 )!= 0)
        {

            sum = sum + arr[j];
        }
    }

    printf("sum is %d ", sum);
  
  return 0;
}