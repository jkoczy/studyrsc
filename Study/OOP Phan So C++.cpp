#include <iostream>
#include <conio.h>
using namespace std;

class CPhanSo
{
	//Du lieu
	private:
		int t;
		int m;
	//Xu ly
	public:
		friend istream& operator >> (istream &, CPhanSo &);
		friend ostream& operator << (ostream &, CPhanSo &);
};

istream& operator >> (istream &is, CPhanSo &x)
{
	cout <<"Nhap tu so: ";
	is >> x.t;
	cout <<"Nhap mau so: ";
	is >> x.m;
	return is;
}

ostream& operator << (ostream &os, CPhanSo &x)
{
	os << "\n Tu: " << x.t;
	os <<"\n Mau: " << x.m;
	return os;
}
int main()
{
	CPhanSo a;
	a.operator << ();
	a.operator >> ();
	getch();
}
