#include<iostream.h>
#include<conio.h>
class base
{
public:
int base_i;
void disp_base()
{
cout<<"from base class:"<<base_i<<endl;
}
};
class base1
{
public:
int base1_i;
void disp_base1()
{
cout<<"from base1 class:"<<base1_i<<endl;
}
};
class child:public base,public base1
{
int a;
void disp_a()
{
cout<<"from child class:"<<a<<endl;
cout<<"from base class:"<<base_i<<endl;
cout<<"from base1 class:"<<base1_i<<endl;
}
};
int main()
{
clrscr();
base b;
base1 b1;
child c;
b.base_i=5;

b1.base1_i=10;

//c.a=40;
c.base_i=20;
c.base1_i=30;

cout<<"from base class:"<<endl;
b.disp_base();

cout<<"from base1 class:"<<endl;
b1.disp_base1();

cout<<"from base & base1 inn derived:"<<endl;
//c.disp_a();

cout<<"from base to derived:"<<endl;
c.disp_base();

cout<<"from base1 to derived:"<<endl;
c.disp_base1();


getch();
return 0;
}








