#include<iostream.h>
#include<conio.h>

class count
{
private:
int a[100],n=0,p=0,b;
public:
void get()
{
cout<<"enter numbers:";
cin>>b;
cout<<"enter"<<b<<"number"<<endl;
for(int i=0;i<b;i++)
cin>>a[i];
}
void put()
{
for(int i=0;i<b;i++)
{
if(a[i]>0)
{
n++;
}
else
{
n++;
}
}
cout<<"no of positive(+ve)value is :"<<p;
cout<<"no of negtive(-ve)value is :"<<n<<endl;
}
};
int main()
{
cout y;
y.get();
y.put();
getch();
return 0;
}













