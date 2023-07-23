#include<iostream>
using namespace std;
class student1
{
    int km;
    public:
    void show()
    {
        cout<<"Enter distance in KM";
        cin>>km;
    }
    friend void add(student1,student2);
    
    };
    class student2
    {
      int m;
       public:
    void show()
    {
        cout<<"Enter distance in m";
        cin>>m;
    }
    friend void add(student1,student2);
    

    };
    void add(student1 m1,student2 k1)
    {
        cout<<"The total distance in meters is "<<k1.m+m1.km*1000;
    }
    int main()
    {
        student1 k1;
        student2 m1;
        k1.show();
        m1.show();
        add(k1,m1);
        return 0;
    }
    