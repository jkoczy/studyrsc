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

PHANSO SoSanh(PHANSO a, PHANSO b)
{
	if (a.mau == b.mau)
	{
		if (a.tu < a.tu)
		{
			printf("Phan so A be hon phan so B");
		}
		else
		{
			printf("Phan so A lon hon phan so B");
		}
	}
	else
	{
		a.tu = a.tu * b.mau;
		b.tu = b.tu * a.mau;
				if (a.tu < b.tu)
		{
			printf("Phan so A be hon phan so B");
		}
		else
		{
			printf("Phan so A lon hon phan so B");
		}
	}
	}
main()
{
	PHANSO A,B;
	Nhap(A);
	Xuat(A);
	Nhap(B);
	Xuat(B);
	SoSanh(A,B);
	getch();
}
