#include<iostream>
#include<conio.h>
using namespace std;
void swap(int*p1,int*p2)
{
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
}
int main()
{
    int a=20;
    int b=30;
    cout<<"\n The value of a is "<<a<<"\n The value of b is "<<b;
    swap(&a,&b);
    cout<<"\n The value of a is "<<a<<"\n The value of b is "<<b;
}