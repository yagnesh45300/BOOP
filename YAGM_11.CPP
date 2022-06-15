#include<iostream.h>
#include<conio.h>

class m
{
	public:
	int id_m;
};

class y:public m
{
public:
int id_y;
};

int main()
{
clrscr();
y s;
s.id_y=7;
s.id_m=5;
cout<<"child id is:"<<s.id_y<<endl;
cout<<"parest id is:"<<s.id_m<<endl;
getch();
return 0;
}





















