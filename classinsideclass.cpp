#include <iostream>
using namespace std;
class date
{
private:
    int dd, mm, yy;

public:
    void set()
    {
        cout << "\nEnter the date in dd-mm-yy format: " << endl;
        cin >> dd >> mm >> yy;
    }
    void show()
    {
        cout << dd << mm << yy;
    }
};
class employee
{
    int empno;
    date doj;
    date dob;

public:
    void set()
    {
        cout << "Enter the employee no." << endl;
        cin >> empno;
        cout << "Entert the date of birth " << endl;
        doj.set();
        cout << "Enter the date of joining " << endl;
        dob.set();
    }
    void show()
    {
        cout << "Employee no. is " << empno;
        cout << "\nThe date of joining is ";
        doj.show();
        cout << "\nThe date of birth is ";
        dob.show();
    }
};
int main()
{
    employee s1;
    s1.set();
    s1.show();
    return 0;
}
