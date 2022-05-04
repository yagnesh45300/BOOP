#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int m=5;

class student{

public:
student(){
c++;
}

int r_no;
char name[20];
int age;
char br[5];
static int c;

void static out(){
cout<<"total instances are:" <<c<<endl;
}

void getdata()
{
cout<<"enter roll number:"<<endl;
cin>>r_no;
cout<<"enter your name"<<endl;
cin>>name;
cout<<"enter your age"<<endl;
cin>>age;
cout<<"enter your branch"<<endl;
cin>>br;
}
void display()
{
cout<<"roll no="<<r_no<<endl;
cout<<"name="<<name<<endl;
cout<<"age="<<age<<endl;
cout<<"branch"<<br<<endl;
}
};
int student::c=0;
int main()
{
int c;
char yn;

clrscr();
do{
cout<<"press 1 for creat new object.\npress 2 for display of object.\n"<<endl;
cin>>c;
switch(c)
{
case 1:
student s;
cout<<"enter student data"<<endl;
s.getdata();
cout<<"display student data"<<endl;
s.display();
break;
case 2:
student::out();
break;
}
cout<<"do you wish to contiune?"<<endl;
cin>>yn;
}while(yn=='y'||yn=='Y');
return 0;
}



















