#include <iostream>
#include <conio.h>
using namespace std;
class A
{
public:
 	virtual void Sketchy() 
	{
	cout<<"\n A's Sketchy()";
 	Sketchy(-1);
 	}
	void Sketchy(int num)
 	{
 	cout<<"\n A's Sketchy(int)"<< num;
	}
};
class B:public A
{
 	public:
	void Sketchy()
	{
 	cout<<"\nB's Sketchy()";	
	 Sketchy(-2);
 	}
 	void Sketchy(int num)
 	{
	cout<<"\n B's Sketchy(int)"<< num;
 	}
};
class C:public B
	{
public:
	void Sketchy(int num)
	{
	cout<<"\nC's Sketchy(int)"<<num;
 	}
};
 void Curious(A* wacky)
{
 	wacky->Sketchy();
 	((C*)wacky)->Sketchy(123);
}

int main()
{
 	A* inky = new B;
	inky->Sketchy();
 	inky->Sketchy(23);
 	Curious(inky);
	B* pinky = new C;
 	pinky->Sketchy();
	pinky->Sketchy(46);
 	Curious(pinky);
 	getch();
}

