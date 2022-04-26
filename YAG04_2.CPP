#include<iostream.h>
#include<conio.h>
//using namespace std;
int& min(int &,int &);

void main()
{
clrscr();
int y,d;

cout<<"enter value of Y and D:";
cin>>y>>d;

int m=min (y,d);

cout<<"normal call ->:"<<endl;
cout<<"minimume=:"<<m<<endl;

min(y,d)=2,1;

cout<<"call on left side->:"<<endl;
cout<<"y=:"<<y<<endl;
cout<<"d=:"<<d<<endl;
}
int& min(int&a ,int&b )
{
getch();
return(a<b?a:b);
}
