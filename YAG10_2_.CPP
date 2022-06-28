#include<iostream.h>
#include<conio.h>
class temp
{
private:
float f,c;
public:
temp()
{
cout<<"enter f:"<<endl;
cin>>f;
}
void con()
{
c=(f-32)*(5)/9;
}
~temp()
{
cout<<"ans is:";
cin>>c;
}
};

void main()
{
temp ob;
getch();
}







