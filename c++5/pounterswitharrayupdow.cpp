#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,7,9,11,12};
    int *p;
    p=arr;//base index number i.e 0
    while(p<arr+5)
    {
        cout<<endl<<*p;
        p++;

    }
    p--;
    while(p>=arr)
    {
        cout<<endl<<*p;
        p--;
    }

}