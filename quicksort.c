#include<stdio.h>
void partition(int a[],int beg, int end, int*loc)//,int end,int beg)
{
    int left,right,temp;
    int flag=1;
    *loc=left=beg;
    right=end;
    while(flag)
    {
        while ((a[*loc]<=a[right])&&(*loc!=right))
        {
            right--;
        }
        if(*loc==right)
        {
            flag=0;
        }
        if(a[*loc]>a[right])
        {
            temp=a[*loc];
            a[*loc]=a[right];
            a[right]=temp;
            *loc=right;

        }
        if(flag)
        {
            while ((a[*loc]>=a[left])&&(*loc!=left))
            {
                left++;
            }
            if(*loc==left)
            {
                flag=0;
            }
            if(a[*loc]<a[left])
            {
                temp=a[*loc];
                a[*loc]=a[left];
                a[left]=temp;
                *loc=left;

            }
            
        }
        
    }
}
void quicksort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        partition(a,lb,ub,&loc);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
 
 void main()
 {
    int arr[10];
    int i;
    printf("Enter the elements of an array :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,9);
    printf("sorted array: ");
    for(i=0;i<10;i++)
    {
        printf("\n %d",arr[i]);
    }
 }