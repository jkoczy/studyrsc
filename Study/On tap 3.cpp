#include <iostream>
#include <conio.h>
using namespace std;

void Nhap(int&,int&);
void Tinh(int,int,int&);
void Xuat(int);

int main()
{
	int one,two,three;
	Nhap(one,two);
	Tinh(one,two,three);
	Xuat(three);
	getch();
}

void Nhap(int& a,int& b)
{
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
}

void Tinh(int a,int b, int& c)
{
	c = a * b;
}

void Xuat(int c)
{
	cout <<"Ket qua: " << c;
}
