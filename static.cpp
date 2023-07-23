#include <iostream>
using namespace std;
class student
{

  int rollno;
  char add[50];
  static char collna[50];
  char name[50];

public:
  student();
  void show();
};
char student::collna[50] = "Shaheed Bhagat Singh State University";
student::student()
{
  cout << "----------------------";
  cout << "\nEnter the roll no ";
  cin >> rollno;
  cout << "\nEnter the address ";
  cin >> add;
  cout << "\nEnter your name ";
  cin >> name;
}
void student::show()
{
  cout << "\n---------------------------";
  cout << "\nThe roll no. is " << rollno;
  cout << "\nThe address is " << add;
  cout << "\nThe name is " << name;
  cout << "\nThe collage name is " << collna;
}
int main()
{
  student s1, s2;
  s1.show();
  s2.show();
  return 0;
}
