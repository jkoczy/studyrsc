#include <stdio.h>
#include <conio.h>
#include <math.h>
class PhanSo
{
	//Phan du lieu
	private:
		int tuso;
		int mauso;
	public:
		void Nhap ();
		void Xuat ();
		void Xuly ();
};

void PhanSo::Nhap()
{
	printf("Tu so: ");
	scanf("%d",&tuso);
	printf("Mau so: ");
	scanf("%d",&mauso);
}

void PhanSo::Xuly()
{
	int	a = abs(tuso);
	int b = abs(mauso);
	int c;
	while (a!=b)
	{
		if (a > b)
		{
			a = a - b;
			c = a;
		}
		else
		{
			b = b - a;
			c = b;
		}
	}
	tuso = tuso / c;
	mauso = mauso / c;
}

void PhanSo::Xuat()
{
	printf("%d / %d",tuso, mauso);
}

int main()
{
	PhanSo a;
	a.Nhap();
	a.Xuly();
	a.Xuat();
}
