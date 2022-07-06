#include<iostream.h>
#include<conio.h>

class base
{
public:
int d;
void show_d()
{
cout<<"from base class:"<<d<<endl;
}
};
class de:public base
{
public:
int m;
void show_m()
{
cout<<"from base class:"<<d<<endl;
cout<<"from devaried class:"<<m<<endl;
}
};
class de2:public de
{
public:
int y;
void show_y()
{
cout<<"from base class:"<<d<<endl;
cout<<"from devaried class:"<<m<<endl;
cout<<"from devaried class2:"<<y<<endl;
}
};

int main()
{
base a;
de f;
de2 g;

cout<<"from base class:"<<endl;
a.d=1;

cout<<"from deravie class:"<<endl;

}
