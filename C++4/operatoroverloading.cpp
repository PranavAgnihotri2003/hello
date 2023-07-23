#include<iostream>
using namespace std;
class student
{
   protected: int rollno;
   public: void set()
   {
    cout<<"enter the roll number ";
    cin>>rollno;
   }
};
class practical:virtual public student
{
    protected:int p1,p2;
    public : void setp()
    {
        cout<<"Enter thr practical";
        cin>>p1>>p2;
    }

};
class theory:virtual public student
{
    protected: int t1,t2;
    public: void sett()
    {
        cout<<"Enter theory marks ";
        cin>>t1>>t2;
   }
};
class result:public practical,public theory
{
    int total,avg;
    public:
    void setresult()
    {
        set();
        setp();
        sett();
        total=p1+p2+t1+t2;
        avg=total/4;
    }
    void show()
    {
        cout<<"\n The roll no. is "<<rollno;
        cout<<"\nThe total is : "<<total<<"\n Average is : "<<avg;
    }
};
void main()
{
    result r1;
    r1.setresult();
    r1.show();
    practical p1;
    cout<<"The size of p is "<<sizeof(p1);
    cout<<"The size of r is "<<sizeof(r1);
}
