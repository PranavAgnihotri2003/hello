#include <iostream>
using namespace std;
class vehicle
{
public:
    virtual void show()
    {
        cout << "This is vehicle class ";
    }
};
class car : public vehicle
{
public:
    void show()
    {
        cout << "Ths is car class ";
    }
};
class truck : public vehicle
{
public:
    void show()
    {
        cout << "This is truck class ";
    }
};
int main()
{
    int choice;
    vehicle *p;
    car obj1;
    truck obj2;
    cout << "Enter choice 1 for car  \n2 for truck \n";
    cin >> choice;
    if (choice == 1)
    {
        p = &obj1;
    }
    else
    {
        p = &obj2;
    }
    p->show();
}
