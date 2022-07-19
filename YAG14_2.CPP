#include<iostream.h>
#include<conio.h>

class base
{
public:
virtual void print()
{
cout<<"base function"<<endl;
}
};

class derived:public base
{
public:
void print()
{
cout<<"derived function"<<endl;
}
};

int main()
{
clrscr();
derived d1;
base *base1= &d1;
base1 -> print();
getch();
return 0;
}











