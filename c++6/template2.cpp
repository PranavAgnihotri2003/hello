#include<iostream>
using namespace std;
template<class T,class M>
class xyz
{
    T x;
    M y;
    public:
    xyz(T x1,M y1)
    {
        x=x1;
        y=y1;
    }
    void show()
    {
        cout<<"\nThe value of x is "<<x<<"\n The value of y is "<<y;
    }

};
int main()
{
    xyz<int,float>x1(2,5.89);
    xyz<float,char>x2(3.56,'a');
    x1.show();
    x2.show();

}
