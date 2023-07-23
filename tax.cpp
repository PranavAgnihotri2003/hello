#include <iostream>
using namespace std;
class abc
{
    int empno;
    char name[20];
    int sal;
    int tax;

public:
    void set()
    {
        cout << "Enter the employee no. ";
        cin >> empno;
        cout << "\nEnter the name ";
        cin >> name;
        cout << "\nEnter the salary ";
        cin >> sal;
        calculate();
    }
    void show()
    {
        cout << "The employee no. is " << empno;
        cout << "\nThe name is " << name;
        cout << "\nThe slalry is " << sal;
        cout << "\nThe tax is " << tax;
    }
    void calculate()
    {
        if (sal > 12000)
        {
            tax = .018 * sal;
        }
        if (sal > 8000 && sal < 12000)
        {
            tax = .012 * sal;
        }
        else
        {
            tax = 0;
        }
    }
};

int main()
{
    abc e1;
    e1.set();
    e1.show();
    return 0;
}
