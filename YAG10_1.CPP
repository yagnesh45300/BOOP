#include<iostream.h>
#include<conio.h>

class m
{
private:
	int sum;
public:
	m (int a,int b,int c)
{
sum=a+b+c;
}
void op()
{
cout<<"your entered number addtion is:"<<sum<<endl;
}
};

int main()
{
int d,y,a;
clrscr();
cout<<"enter value of d:"<<endl;
cin>>d;
cout<<"enter value of y:"<<endl;
cin>>y;
cout<<"enter value of a:"<<endl;
cin>>a;
m obj (d,y,a);
obj.op();
getch();
return 0;
}
