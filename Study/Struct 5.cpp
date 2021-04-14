#include <stdio.h>
#include <conio.h>

struct PHANSO
{
	int tu;
	int mau;
};

void Nhap(PHANSO &a)
{
	printf("Tu so: ");
	scanf("%d",&a.tu);
	printf("Mau so: ");
	scanf("%d", &a.mau);
}

void Xuat(PHANSO a)
{
	printf("%d/%d\n",a.tu,a.mau);
}

void Cong(PHANSO a, PHANSO b)
{
	if (a.mau == b.mau)
	{
		int kqt = a.tu + b.tu;
		printf("%d / %d",kqt,a.mau);
	}
	else
	{
		a.tu = a.tu * b.mau;
		b.tu = b.tu * a.mau;
		a.mau = a.mau * b.mau;
		int kqt = a.tu + b.tu;
		printf("%d / %d", kqt, b.mau);
	}
	}
main()
{
	PHANSO A,B;
	Nhap(A);
	Xuat(A);
	Nhap(B);
	Xuat(B);
	Cong(A,B);
	getch();
}
