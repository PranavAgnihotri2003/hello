#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    char ch1[]="pppp";
    char ch2[5];
    int i=0,d;
    cout<<"Enter password ";
    while(i<4)
    {
        ch2[i]=getch();
        printf("*");
        i++;
    }
    ch2[4]='\0';
    d=strcmp(ch1,ch2);
    if(d==0)
    {
            cout<<"password matched";

    }
    else
    {
        cout<<"password not matched ";
    }


}

