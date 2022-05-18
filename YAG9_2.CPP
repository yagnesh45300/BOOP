#include<iostream.h>
#include<conio.h>


class B;

class A{
public:
	void showB(B&);
};

class B{
private:
	int b;

public:
	B(){b=0;}
friend void A::showB(B&x);
};

void A::showB(B&x)
{
	//Since showB() is friend of B,it can
	//acess private members ofB
	std:cout<<"B::b="<<x.b;
}

int main()
{
	A a;
	B x;
	a.showB(x);
	return 0;
}