#include<iostream>
using namespace std;
template<class T>
class xyz
{
    T x,y;
    public:
    xyz(T x1, T y1)
    {
        x=x1;
        y=y1;
    }
    void show()
    {
        cout<<"\nThe value of x is "<<x;
        cout<<"\nThe value of y is "<<y;
    }
};
int main()
{
    xyz<int>x1(8,11);
    xyz<float>x2(3.3,34.3);
    xyz<double>x3(2.3,35.4);
    xyz<char>x4('a','b');
    x1.show();
    x2.show();
    x3.show();
    x4.show();
}
