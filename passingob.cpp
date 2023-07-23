#include<iostream>
using namespace std;
class distancee
{
    int m;
    int cm;
    
    public:
    void set()
    
    {
        cout<<"Enter the distance in m"<<endl;
        cin>>m;
        cout<<"Enter the distance in cm"<<endl;
        cin>>cm;
    }
    void show()
    {
        cout<<"The distance in cm is "<<cm;
        cout<<"\nThe distance in m is "<<m;

    }
   distancee calculate(distancee d)
    {
        distancee temp;
         temp.m=m+d.m;
         temp.cm=cm+d.cm;
         return temp;
    }
};
int main()
{
    distancee d1,d2,d3;
    d1.set();
    d2.set();
    d3=d1.calculate(d2);
    d3.show();

}