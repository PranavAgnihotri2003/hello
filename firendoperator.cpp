#include <iostream>
using namespace std;
class distancem;
class distancek
{
    int km;

public:
    void set()
    {
        cout << "Enter the kms :";
        cin >> km;
    }
    void show()
    {
        cout << "The kilmometers are : " << km;
    }
    friend distancem operator+(distancem, distancek);
};
class distancem
{
    int m;

public:
    void set()
    {
        cout << "Enter the meters: ";
        cin >> m;
    }
    void show()
    {
        cout << "The meters are: " << m;
    }
    friend distancem operator+(distancem, distancek);
};
distancem operator+(distancem m1, distancek k1)
{
    distancem temp;
    temp.m = m1.m + k1.km * 1000;
    return (temp);
}
int main()
{
    distancem m1;
    m1.set();
    distancek k1;
    k1.set();
    distancem m2 = m1 + k1;
    m2.show();
    return 0;
}