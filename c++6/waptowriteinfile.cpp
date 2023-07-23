#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("c:\\bb.txt");
    char ch;
    while (ch != EOF)
    {
        cin.get(ch);
        fout << ch;
    }
    fout.close();
}