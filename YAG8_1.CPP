#include<iostream.h>
#include<conio.h>

class yagnesh
{
private:
int j,m;
public:
void get()
{
cout<<"enter j:";
cin>>j;
cout<<"enter m:";
cin>>m;
}
int max (yagnesh y)
{
if (y.j<y.m)
{
cout<<j<<"is min number"<<endl;
}
else
{
cout<<m<<" is min number"<<endl;
}
return (j,m);
}
};

int main()
{
clrscr();
yagnesh y;
y.get();
y.max(y);
getch();
return 0;
}