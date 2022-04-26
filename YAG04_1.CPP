#include<iostream.h>
#include<conio.h>
//using namespace std ;

void exch(int &,int &);
void main()
{

int x,y;

clrscr();
cout<<"enter two num"<<endl;
cin>>x>>y;

exch(x,y);
cout<<"after swapping"<<endl;
cout<<x<<" "<<y<<endl;
getch();
}
void exch(int& a,int& b)
{
int c;
c=a;
a=b;
b=c;
}
