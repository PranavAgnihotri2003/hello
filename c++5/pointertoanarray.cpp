#include<iostream>
using namespace std;
class employee
{
    int empno;
    char name[20];
    int sal;
    public:
    void set()
    {
        cout<<"Enter the empno ";
        cin>>empno;
        cout<<"Enter the name ";
        cin>>name;
        cout<<"Enter the salary ";
        cin>>sal;
        }
        void show()
        {
            cout<<" the empno is "<<empno<<"the name is "<<name<<"The salry is "<<sal;
        }

};
int main()
{
    employee e[5];
    int i;
   for(i=0;i<5;i++)
   {
    e[i].set();
   } 
   employee*p;
   p=e;
   while (p<e+5)
   {
    p->show();
    p++;
   }
   
}