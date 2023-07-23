#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
void append();
void view();
void search();
void modify();
void del();
class employee
{
private:
int empno;
char name[30];
int salary;
char email[30];//email
char add[40];
public:
void set()
{
cout<<"\n Enter the employee number: ";
cin>>empno;
cout<<"\n Enter the name of the employee: ";
cin>>name;
cout<<"\n Enter the salary of the employee: ";
cin>>salary;
cout<<"\n Enter the email of the employee: ";
cin>>email;
cout<<"\n Enter the address of the employee: ";x
cin>>add;
}
void show()
{
cout<<"\n\tEMPLOYEE NUMBER: "<<empno;
cout<<"\n\tEMPLOYEE NAME: "<<name;
cout<<"\n\tEMPLOYEE SALARY: "<<salary;
cout<<"\n\tEMAIL IS: "<<email;
cout<<"\n\tTHE ADDRESS IS: "<<add;
}
void change()
{
cout<<"\n\tEnter the name of the employee: ";
cin>>name;
cout<<"\n\tEnter the salary of the employee: ";
cin>>salary;
cout<<"\n\tEnter the Email of the employee: ";
cin>>email;
cout<<"\n\tEnter the address of the employee: ";
cin>>add;
}
int getempno()
{
return empno;
}
};
void menu()
{
while(1)
{
cleardevice();
gotoxy(30,4);
cout<<"\n";
cout<<"\n\t*=======================================================*";
cout<<"\n\t*               EMPLOYEE MANAGEMENT SYSYTEM             *";
cout<<"\n\t*=======================================================*";
cout<<"\n\t*              You have following options:-             *";
cout<<"\n\t*                                                       *";
cout<<"\n\t*  1) APPEND NEW EMPLOYEE                               *";
cout<<"\n\t*  2) VIEW EMPLOYEE DETAILS                             *";
cout<<"\n\t*  3) SEARCH EMPLOYEE RECORD                            *";
cout<<"\n\t*  4) MODIFY EXISTING EMPLOYEE                          *";
cout<<"\n\t*  5) DELETE EMPLOYEE RECORD                            *";
cout<<"\n\t*  6) EXIT                                              *";
cout<<"\n\t*********************************************************";
cout<<"\n\n\t             ENTER YOUR CHOICE                         ";
int choice;
cin>>choice;
switch(choice)
{
case 1:append();
break;
case 2:view();
break;
case 3:search();
break;
case 4:modify();
break;
case 5:del();
break;
case 6:exit(0);
default:cout<<"\n\tINVALID CHOICE...Try again";
}
getch();
}
}
void main()
{
  ///////////////////
  int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(15);
setcolor(5);
settextstyle(2,0,50);
outtextxy(50,100,"EMPLOYEE");
delay(100);
outtextxy(150,200,"MANAGEMENT");
delay(100);
outtextxy(300,300,"SYSTEM");
settextstyle(1,0,2);
outtextxy(350,400,"Press any key to continue");
getch();
}
 //password
{
clrscr();
int gd=DETECT,gm;
int i=0,d;
char ch1[]="aaaa";
char ch2[20];
initgraph(&gd,&gm,"c://turboc3\\bgi");
line(200,100,200,200);
setbkcolor(0);
reset:
i=0;
cleardevice();
line(0,10,0,450);
line(0,10,638,10);
line(638,10,638,450);
line(0,450,638,450);

line(0,10,0,450);
line(15,30,15,430);
line(0,10,638,10);
line(15,30,622,30);
line(638,10,638,450);
line(638,10,638,450);
line(0,450,638,450);
line(622,30,622,430);
line(15,430,622,430);

arc(30,430,0,100,80);


setcolor(6);
settextstyle(3,0,4);
outtextxy(30,40,"ENTER  YOUR PASSWORD: ");
gotoxy(60,4);
while(i<4)
{
ch2[i]=getch();
moveto(400,800);
printf("*");
i++;
}
ch2[4]='\0';
d=strcmp(ch1,ch2);
gotoxy(20,13);
if(d==0)
{
printf("\n    PASSWORD MATCHED SUCCESFULLY");
setcolor(9);
circle(300,300,58);
circle(276,280,13);
circle(326,280,13);
arc(300,320,180,0,20);
}
else
{
gotoxy(2,12);
printf("\nWrong password...TRY AGAIN");
setcolor(4);
circle(300,300,58);
circle(276,280,13);
circle(326,280,13);
arc(300,330,0,180,20);
getch();
goto reset;
}
getch();
}
//welcome
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3\\bgi");

line(0,10,0,450);
line(15,30,15,430);
line(0,10,638,10);
line(15,30,622,30);
line(638,10,638,450);
line(622,30,622,430);
line(0,450,638,450);
line(15,430,622,430);


arc(30,430,0,100,80);
arc(600,40,172,290,70);
arc(620,430,90,180,40);
arc(10,30,280,0,45);

settextstyle(3,0,8);
setcolor(13);
outtextxy(100,180,"WELCOME....");

delay(1000);
getch();
}
//loading
{
clrscr();
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c://turboc3\\bgi");

line(0,10,0,450);
line(15,30,15,430);
line(0,10,638,10);
line(15,30,622,30);
line(638,10,638,450);
line(622,30,622,430);
line(0,450,638,450);
line(15,430,622,430);

gotoxy(13,18);
printf("LOADING...");

for(i=0;i<=100;i++)
{
setcolor(1);
rectangle(100,300,154+i,320);
circle(500,300,1+i);
gotoxy(15,20);
printf("%d",i);
printf(" %");
delay(30);
}
settextstyle(3,0,4);
setcolor(6);
outtextxy(70,70,"PRESS ANY KEY TO CONTINUE...");
setcolor(4);
getch();


  //////////////////////
menu();
}
void append()
{
int i,n;
employee e;
fstream fs;
fs.open("binary.dat",ios::app|ios::binary);
if(!fs)
{
cout<<"\n\tFile creation has failed";
getch();
exit(0);
}
cout<<"\n\tEnter the number of emplyees you want to save: ";
cin>>n;
for(i=1;i<=n;i++)
{
e.set();
fs.write((char*)&e,sizeof(e));
cout<<"\n============================================";
}
fs.close();
cout<<"\n\n\t   *DATA SAVED SUCCESFULLY*    ";
}
void view()
{
clrscr();
employee e;
fstream fs;
fs.open("binary.dat",ios::in|ios::binary);
if(!fs)
{
cout<<"\n\tFile opening failed";
getch();
exit(0);
}
int record=0;
fs.read((char*)&e,sizeof(e));
while(!fs.eof())
{
e.show();
cout<<"\n\t====================================================";
record++;
fs.read((char*)&e,sizeof(e));
}
fs.close();
cout<<"\n\tTotal number of records: "<<record;
}
void search()
{
employee e;
fstream fs;
fs.open("binary.dat",ios::in|ios::binary);
if(!fs)
{
cout<<"\n\tFile opening failed";
getch();
exit(0);
}
int empno,flag=0;
cout<<"Enter the employee number you want to search: ";
cin>>empno;
fs.read((char*)&e,sizeof(e));
while(!fs.eof())
{
if(e.getempno()==empno)
{
cout<<"\n\t    *SEARCHING IS SUCCESFUL*";
e.show();
flag=1;
break;
}
fs.read((char*)&e,sizeof(e));
}
if(flag==0)
{
cout<<"\n\tRecord with employee number"<<empno<<"is not available";
}
fs.close();
}
//modification
void modify()
{
employee e;
fstream fs;
fs.open("binary.dat",ios::in|ios::out|ios::binary);
if(!fs)
{
cout<<"\n\tFile opening failed";
getch();
exit(0);
}
int empno,record=0,flag=0;
cout<<"Enter the employee number you want to modify";
cin>>empno;
fs.read((char*)&e,sizeof(e));
while(!fs.eof())
{
record++;
if(e.getempno()==empno)
{
e.show();
cout<<"\n\tDo you want to modify this record";
cout<<"Press y for yes: ";
char ch;
cin>>ch;
flag=1;
if(ch=='y'||ch=='Y')
{
e.change();
fs.seekp(fs.tellg()-sizeof(e));
fs.write((char*)&e,sizeof(e));
cout<<"\n\t *MODIFICATION SUCCESFUL*";
}
else
{
cout<<"\n\t  No modification made";
}
}
fs.read((char*)&e,sizeof(e));
}
if(flag==0)
{
cout<<"\n No record is available";
}
fs.close();
}
void del()
{
employee e;
fstream fs;
fstream o;
o.open("new.dat",ios::out|ios::binary);
fs.open("binary.dat",ios::in|ios::binary);
int empno,flag=0;
char ch;
cout<<"\n\tEnter the employee number you want to delete";
cin>>empno;
fs.read((char*)&e,sizeof(e));
while(!fs.eof())
{
if(e.getempno()==empno)
{
cout<<"\n\tRECORD";
cout<<"\n\t======";
e.show();
cout<<"\n\tDo you want to delete the record";
cout<<"\n\t->Press Y for yes";
flag=1;
}
fs.read((char*)&e,sizeof(e));
}
fs.close();
if(flag==0)
{
cout<<"\n\t There is no record with employee number"<<empno;
cout<<"\n\t NO DELETION IS POSSIBLE";
}
if(flag==1)
{
cin>>ch;
if(ch=='y'||ch=='Y')
{
fs.open("binary.dat",ios::in|ios::binary);
fs.read((char*)&e,sizeof(e));
while(!fs.eof())
{
if(e.getempno()!=empno)
{
o.write((char*)&e,sizeof(e));
}
fs.read((char*)&e,sizeof(e));
}
fs.close();
o.close();
remove("binary.dat");
rename("new.dat","binary.dat");
clrscr();
cout<<"\n\t**DELETION SUCCESFUL**";
}
else
{
cout<<"\n\tNO RECORD IS DELETED";
}
}
}


