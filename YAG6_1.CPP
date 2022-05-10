#include<iostream.h>
#include<conio.h>

class temp
{
private:
float f;
//float c;

public:
void get()
{
cout<<"enter f";
cin>>f;
}
float convert()
 {
 float c=(f-32)*(5)/9;
return c;
 };
 };

int main()
{
temp x;
clrscr();
x.get();
cout<<"value in fernhit:"<<x.convert()<<endl;
getch();
return 0;
}







