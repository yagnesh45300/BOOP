#include<iostream.h>
#include<conio.h>

class base
{

public:
base()
{
cout<<"base"<<endl;
}
};
class base_1
{
public:
base_1()
{
cout<<"base1"<<endl;
}
};
class child:public base,public base_1
{
public:
child()
{
cout<<"derived"<<endl;
}
};
void main()
{
clrscr();
child y;
getch();
}

















