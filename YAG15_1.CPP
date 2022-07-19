#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>

struct student
{
int r_no;
int age;
char name[20];
char br[20];
};

int main()
{
student s[5];
ofstream ofs;
ofs.open("text,txt",ios::app);
int i,n;
clrscr();
cout<<"enter nunmber of student:";
cin>>n;
cout<<"student data"<<endl;
for(i=0;i<n;i++)
{
cout<<"enter roll number:";
cin>>s[i].r_no;
cout<<"enter name:";
cin>>s[i].name;
cout<<"enter age:";
cin>>s[i].age;
cout<<"enter branch:";
cin>>s[i].br;
}
cout<<"display data"<<endl;
for(i=0;i<n;i++)
{
cout<<"student roll no:"<<s[i].r_no<<endl;
ofs<<s[i].r_no<<" ";
cout<<"student name:"<<s[i].name<<endl;
ofs<<s[i].name<<" ";
cout<<"student age:"<<s[i].age<<endl;
ofs<<s[i].age<<" ";
cout<<"student branch:"<<s[i].br<<endl;
ofs<<s[i].br<<" ";
cout<<endl;
}
ofs.close();
ifstream ifs("text.txt");
int r_no,sr;
char name[20];
int age;
char br[10];
cout<<"enter roll number to serach:";
cin>>sr;
for(i=0;i<n;i++)
{
ifs>>r_no;
if(r_no==sr)
{
cout<<"roll no:"<<r_no<<endl;
ifs>>name;
cout<<"name:"<<name<<endl;
ifs>>age;
cout<<"age:"<<age<<endl;
ifs>>br;
cout<<"branch"<<br<<endl;
}
else
{
ifs>>name;
ifs>>age;
ifs>>br;
}
}
ifs.close();
getch();
return 0;
}

















