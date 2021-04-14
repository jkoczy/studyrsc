#include <iostream>
#include <conio.h>
using namespace std;
class CPhanSo
{
	//Du lieu
	private:
		int tu;
		int mau;
	public:
		void Nhap();
		void Xuat();
		CPhanSo operator+(CPhanSo);
		CPhanSo operator-(CPhanSo);
};

CPhanSo CPhanSo::operator+(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu*x.mau + mau*x.tu;
	temp.mau = mau*x.mau;
	return temp;
}

CPhanSo CPhanSo::operator-(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu*x.mau - mau*x.tu;
	temp.mau = mau*x.mau;
	return temp;
}
void CPhanSo::Nhap()
{
	cout << "Nhap tu: ";
	cin >> tu;
	cout << "Nhap mau: ";
	cin >> mau;
}

void CPhanSo::Xuat()
{
	cout << tu << "/" << mau;
}

int main()
{
	CPhanSo a,b,kq;
	a.Nhap();
	b.Nhap();
	kq = a.operator+(b);
	kq.Xuat();
	kq = a.operator-(b);
	kq.Xuat();
	getch();
}
