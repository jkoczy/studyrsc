#include <iostream>
#include <conio.h>
using namespace std;

struct PHANSO
{
	int ts;
	int ms;
};

typedef struct PHANSO PHANSO;

void Nhap(PHANSO &P)
{
	cout << "Nhap x: ";
	cin >> P.ts;
	cout << "Nhap y: ";
	cin >> P.ms;
}

void Xuat(PHANSO P)
{
	cout <<"\n x = " << P.ts;
	cout <<"\n y = " << P.ms << "\n";
}

PHANSO Tich(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.ts = x.ts * y.ts;
	temp.ms = x.ms * y.ms;
	return temp;
}

PHANSO TONG(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.ts = (x.ts * y.ms) + (y.ts * x.ms);
	temp.ms = x.ms * y.ms;
	return temp;
}

PHANSO Hieu(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.ts = (x.ts * y.ms) - (y.ts * x.ms);
	temp.ms = x.ms * y.ms;
	return temp;
}

int main()
{
	PHANSO A, B;
	Nhap(A);
	Xuat(A);
	Nhap(B);
	PHANSO C = Tich(A,B);
	Xuat(C);
	PHANSO D = TONG(A,B);
	Xuat(D);
	PHANSO E = Hieu(A,B);
	getch();
}
