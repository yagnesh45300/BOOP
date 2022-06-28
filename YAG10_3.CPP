#include<iostream.h>
#include<conio.h>
class student
{
private:
float bde,phy,ic,sum;
char std_name[20],course[20];
public:
student()
{
cout<<"enter data"<<endl;
cout<<"student name:"<<endl;
cin>>std_name;
cout<<"enter course:"<<endl;
cin>>course;
cout<<"marks of bde:"<<endl;
cin>>bde;
cout<<"marks of phy:"<<endl;
cin>>phy;
cout<<"marks of ic:"<<endl;
cin>>ic;
}
~student()
{
cout<<"..display student data.."<<endl;
cout<<"student name is:"<<std_name<<endl;
cout<<"student course is:"<<course<<endl;
sum=bde+phy+ic;
cout<<"total marks is:"<<sum<<endl;
}
};
int main()
{
student ob;
return 0;
}