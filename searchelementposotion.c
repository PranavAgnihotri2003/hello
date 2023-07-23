/**#include<stdio.h>
void main()
{
    int arr[100],c,i,j,n;
    printf("enter the number of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the %d element ",i);
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++)
   {
    printf("\nthe elememt you have entered at %d is %d",i,arr[i]);
   }
   printf("\nEnter the element you want to search ");
   scanf("%d",&j);
   for(i=0;i<n;i++)
   {
    if(arr[i]=j)
    {
        c=1;
        break;
    }
   }
   if(c==1)
   {
    printf("\nThe serach is succesful at %d position",i);
   }
   else{
    printf("the search is not succesful");
   }
}
