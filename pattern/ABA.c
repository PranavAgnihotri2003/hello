#include <stdio.h>
void main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }
    for (i = 4; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }
}