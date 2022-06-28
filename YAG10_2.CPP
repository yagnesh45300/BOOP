#include<iostream.h>
#include<conio.h>

class yagnesh
{
private:
int x,y;
public:
yagnesh()
{
x=0;
y=0;
}
yagnesh(int x1,int y1)
{
x=x1;
y=y1;
}
yagnesh(yagnesh &p)
{
x=p.x;
y=p.y;
}
void print()
{
cout<<x<<" "<<y<<endl;
}
};

void main()
{
int n,p;
clrscr();
cout<<"n:"<<endl;
cin>>n;
cout<<"p:"<<endl;
cin>>p;
yagnesh ob;
cout<<"ob=";
ob.print();
yagnesh ob1(n,p);
cout<<"ob1:";
ob1.print();
yagnesh ob2(ob1);
cout<<"ob2:";
ob2.print();
yagnesh ob3;
ob2 =ob3;
cout<<"ob3:";
ob3.print();
getch();
}





