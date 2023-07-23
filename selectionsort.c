#include<stdio.h>
int main()
{
  int arr[10];
  int i,small,loc,j,temp;
  printf("Enter the elements you want to eneter leass than or equal to ten ");

  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<10;i++)
  {
    small=arr[i];
    loc=i;
    for(j=i+1;j<10;j++)
    {
        if(arr[j]<small)
        {
            loc=j;
            small=arr[j];
        }
    }
temp=arr[i];
arr[i]=arr[loc];
arr[loc]=temp;
    
  }
  printf("\n sorted array ");
  for(int i=0;i<10;i++)
  {
    printf("\n %d",arr[i]);
  }
  return 0;

}