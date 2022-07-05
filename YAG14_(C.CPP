#include<iostream.h>
#include<conio.h>
class yag
{
public:
float area;
yag()
{
area=0;
}

yag(int a,int b)
{
area=a+b;
}
void show()
{
cout<<area<<endl;
}};
int main()
{
yag y;
yag y2(2,3);
y.show();
y2.show();
getch();
return 0;
}












