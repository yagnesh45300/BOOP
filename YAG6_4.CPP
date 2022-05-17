#include<iostream.h>
#include<conio.h>

class student{
private:
	int en_no;
	char name[20];
	char course[15];
	int sub1,sub2,sub3;

public:
void get()
{
cout<<"enter roll number:"<<endl;
cin>>en_no;
cout<<"enter your name:"<<endl;
cin>>name;
cout<<"enter your course:"<<endl;
cin>>course;
cout<<"enter your first subject marks:"<<endl;
cin>>sub1;
cout<<"enter your second subject marks:"<<endl;
cin>>sub2;
cout<<"enter your third subject marks:"<<endl;
cin>>sub3;
};

void put()
{
cout<<"roll number"<<en_no<<endl;
cout<<"name"<<name<<endl;
cout<<"course"<<course<<endl;
cout<<"sub 1"<<sub1<<endl;
cout<<"sub 2"<<sub2<<endl;
cout<<"sub 3"<<sub3<<endl;
}

void Total()
{
int total=sub1+sub2+sub3;
cin>>total;
}
};

int main()
{
student s[50];
int n,i;
cout<<"enter number of student:"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
s[i].get();
}
cout<<".....print student data.....";
for(i=0;i<n;i++)
{
s[i].put();
s[i].Total();
}
return 0;
}