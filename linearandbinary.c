#include<stdio.h>
void binarysearch(int arr[],int size,int element)
{
    int beg,end,mid;
    beg=0;
    end=size-1;
    mid=(beg+end)/2;
    while (beg<=end)
    {
    
    if(arr[mid]==element)
    {
        return mid;
    }
    if(arr[mid]<element)
    { 
        beg=mid+1;
    }
    else
    {
        end=mid-1;
    }
    }
    return -1;
}
void linearsearch(int arr[],int size,int element)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
    {
        return i;
    }
    else{
        return -1;
    }
    }
    
}
void main()
{
    int arr[10],p,i,j,n;
    
}
