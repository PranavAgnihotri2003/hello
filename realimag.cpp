#include<iostream>
using namespace std;
class complex 
{
    int real,imag;
    public:
    void set()
    {
        cout<<"Enter the real and imaginary part ";
        cin>>real>>imag;
    }
    void show()
    {
         cout<<"\nThe real part is "<<real;
         cout<<"\nthe imaginary part is "<<imag;
    }
    complex operator+(complex c2)
    {
        complex c3;
        c3.real=real+c2.real;//real=c1
        c3.imag=imag+c2.imag;
        return(c3);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set();
    c2.set();
    c3=c1+c2;
    c3.show();
    return 0;
}