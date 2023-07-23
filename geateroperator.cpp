#include <iostream>
using namepsace std;
class dist
{
    int meter;

public:
    int set(int)
    {
        cout << "Enter the meters";
        cin >> meter;
    }
    void show()
    {
        cout << "/n the meters are " << meter;
    }
    int operator>(dist d2)
    {
        if (meter > d2.meter)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    dist d1, d2;
    d1.set();
    d2.set();
    if (d1 > d2)
    {
        cout << "D1 is greater ";
    }
    else
    {
        cout << "d2 is greater ";
    }
}