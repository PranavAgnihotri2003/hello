#include<stdio.h>
void main()
{
    int i,j;
    int count=9;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
            count++;
            if (count>9)
            {
                count=0;
            }
            

        }
        printf("\n");
    }

}
