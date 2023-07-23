#include <stdio.h>
#include <string.h>
void main()
{
    char string[] = "hello how are you";
    int i;

    for (i = 0; i <= strlen(string); i++)
    {
        if (string[i] == ' ')
        {
            string[i] = '-';
        }
    }
    printf("The string after replacing spaces with hyphen is %s ", string);
}