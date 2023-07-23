#include<stdio.h>
void temp(int x)
{
    int farenhiet;
    farenhiet=1.8*x+32;
    printf("The temperature in farenhiet is %d",farenhiet);
}
void main()
{
    int centigrade,farenhiet;
    printf("Enter the temp in centigrade ");
    scanf("%d",&centigrade);
    temp(centigrade);
}