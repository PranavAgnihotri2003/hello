#include<stdio.h>
void main()
{
    int i,max,min,arr[10],n;
    printf("Enter the number of elemnts: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Enter elements in the array: ");
    scanf("%d",&arr[i]);
    }

max=arr[0];
min=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>max)
{
    max=arr[i];
}
else if(arr[i]<min)
{
    min=arr[i];
}
}
printf("The maximum element is: %d",max);
printf("\nThe minimum element is: %d",min);

   for ( i=0; i<n;i++)
   
{
    if(arr[i]==max)
    {
        printf("\nThe position of max element is %d",i+1);
    }
    if(arr[i]==min)
    {
        printf("\nThe position of min elememt is: %d",i+1);
    }
}
}