#include<stdio.h>
void main()
{
    for (int i = 1; i <= 20; i++)
    {
     if (i%2==0)
     {
       printf(" %d",i);
     }
     else
     {
        printf("");
     }
     continue;
     }
     printf("\n");
    for (int j = 20; j >= 1; j--)
    {
      if (j%2==0)
     {
       printf("%d",j);
     }
     else
     {
        printf(" ");
     }
    }
    
    
}