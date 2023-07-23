#include<stdio.h>
void main()
{
    int n;
    printf("Enter the ineteger in range [0,80] ");
    scanf("%d",&n);
    if(n>0&&n<=20)
    {
        printf("The is [0,20]");
    }
    else if(n>20&&n<=40)
    {
        printf("The range is [21,40]");
    }
    else if(n>40&&n<=60)
    {
        printf("The range is [41,60]");
    }
    else if(n>60&&n<=80)
    {
        printf("The range is [61,80]");
    }

}