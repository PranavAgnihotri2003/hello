#include<iostream>
using namespace std;
class distancee
{
    int meter ;
    public:
    void set()
    {
        cout<<"Enter thr meters";
        cin>>meter;
    }
    void show()
    {
        cout<<"\n The meters are "<<meter;
    }
    void operator++(int)
    {
        meter++;
    }
    void operator+(int n)
    {
        meter =meter+n;
    }

};
int main()
{
    distancee d1;
    d1.set();
    d1++;
    d1+10;
    d1.show();
}