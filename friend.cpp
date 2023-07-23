#include<iostream>
using namespace std;
class distancek
{
    int km;
    public:void set()
    {
        cout<<"Enter the km : ";
        <<cin>>km;
    }
    friend distancem operator+(distancem,distancek);
};
class distancem
{
    int meter;
    public: void set()
    {
        cout<<"\nEnter the meters ";
        cin>>meter;
    }
    void show()
    {
        cout<,"\n The meters are :"<<meter;
    }
    friend distancem operator+(distancem,distancek);

};
distance operator+(distance m1,distancek k1)
{
    distance temp;
    temp.meter=m1.meter+K1.km*100;
    return(temp);
}
void main()
{
    distance m1;
    m1.set();
    distance k1;
    k1.set();
    distance m2= m1+k1;
    m2.show();
}
