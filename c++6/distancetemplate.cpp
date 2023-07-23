    #include<iostream>
    using namespace std;
    template<class t>
    class dist
    {
        int meter;
        public:
        void swap(t&a,t&b)
        {
            int temp;
            temp=a;
            a=b;
            b=temp;

        }
    };
    int main()
    {
        int x=10,y=20;
        float r=2.2,m=1.5;
        char ch1='a',ch2='b';
        swap(x,y);
        swap(r,m);
        swap(ch1,ch2);
        cout<<"The value of x is "<<x;
        cout<<"\nThe value of y is "<<y;
        cout<<"\nThe value of r is "<<r;
        cout<<"\nThe value of m is "<<m;
        cout<<"\nThe value of ch1 is"<<ch1;
        cout<<"\nThe value of ch2 is "<<ch2;

    }