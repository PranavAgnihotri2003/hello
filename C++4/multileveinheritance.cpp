#include <iostream>
using namespace std;
class person
{

    char name[30];
    char address[30];

public:
    void set()
    {
        cout << "Enter the name and adrress of the person ";
        cin >> name >> address;
    }
    void show()
    {
        cout << "The name of the person is " << name;
        cout << "\nThe address of the person is " << address;
    }
};
class employee : public person
{
    int salary;

public:
    void set()
    {
        person::set();
        cout << "Enter the salary of the person ";
        cin >> salary;
    }
    void show()
    {
        person::show();
        cout << "\nThe salary of the employee is " << salary;
    }
};
class department : public employee
{
    char dname[30];

public:
    void set()
    {
        employee::set();
        cout << "Enter the name of the department ";
        cin >> dname;
    }
    void show()
    {
        employee::show();
        cout << "\n the name of the department is " << dname;
    }
};
int main()
{
    department d1;
    d1.set();
    d1.show();
    return 0;
}