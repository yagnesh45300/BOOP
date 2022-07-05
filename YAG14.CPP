#include<iostream.h>
#include<conio.h>
class papa
{
public:
void fun(int x)
{
cout<<"valueof x"<<x<<endl;
}

void fun(int y,int c)
{
cout<<"value of y&c"<<y<<c<<endl;
}

void fun(double z)
{
cout<<"value of z"<<z<<endl;
}
};
void main()
{
clrscr();
papa p;
p.fun(5);
p.fun(22,21);
p.fun(22.2);
getch();
}















