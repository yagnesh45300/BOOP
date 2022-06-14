#include<iostream.h>
#include<conio.h>

class student
{
public:
int stID;
int stAGE;
char stNAME;

student input(int n,int a,char s)
{
student y;
y.stID=n;
y.stAGE=a;
y.stNAME=s;
return y;
}
void display(student y)
{
cout<<"name"<<y.stNAME<<endl;
cout<<"age"<<y.stAGE<<endl;
cout<<"id"<<y.stID<<endl;
}
};
int main()
{
student m;
m=m.input(2,1,'ab');
m.display(m);
return 0;
}












