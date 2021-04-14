#include <iostream>
#include <conio.h>
using namespace std;

void Nhap(int&);
void Xuly(int,int[]);
void Xuat(int,int[]);

int main()
{
	int a,c[100];
	Nhap(a);
	Xuly(a,c);
	Xuat(a,c);
}

void Nhap(int& b)
{
	cout << "Nhap a: ";
	cin >> b;
}

void Xuly(int b,int c[])
{
	for(int i = 1; i <= b; i++)
	{
		cin >> c[i];
	}
}

void Xuat(int b,int c[])
{
	for(int i = 1; i <=b; i++)
	{
		cout << "%2d" << c[i];
	}
}
