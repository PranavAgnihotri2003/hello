#include<iostream>
using namespace std;
class date{
    private: 
    int dd,mm,yy;
    public:
    void set()
    {
        cout<<"Entert the adte in dd-mm-yy format "<<endl;
        cin>>dd>>mm>>yy;
    }
    void dipslay()
    {
        cout<<"The date is "<<dd<<"-"<<mm<<"-"<<yy;
    }
    date add(date d2)
    {
        date temp;
        temp.dd=dd+d2.dd;
        temp.mm=mm+d2.dd;
        temp.yy=yy+d2.yy;

    }
    if(dd>30)
    {
      
    }


};