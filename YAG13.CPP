#include<iostream.h>
#include<conio.h>
class yag
{
public:
int y;
yag retobj(int y)
{
this->y=y;
return *this;
}
void show()
{
cout<<y;
}
};
int main()
{
yag m;
clrscr();
m.retobj(5);
m.show();
yag n=m.retobj(5);
n.show();
getch();
return 0;
}













