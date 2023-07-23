#include <iostream>
#include <conio.h>
using namespace std;
class student
{
  int rollno;
  char name[20];
  int marks;

public:
  void set()
  {
    cout << "Enter your roll no. " << endl;
    cin >> rollno;
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Enter the marks " << endl;
    cin >> marks;
  }
  void show()
  {
    cout << "\n\nThe roll no. is " << rollno;
    cout << "\nThe name is " << name;
    cout << "\nThe marks are " << marks;
  }
};
int main()
{
  student S1, S2;
  S1.set();
  S2.set();
  S1.show();
  S2.show();
  return 0;
}
