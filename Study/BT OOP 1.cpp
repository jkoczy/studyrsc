#include <stdio.h>
#include <conio.h>

class PhanSo
{
	//phan du lieu
	private:
		float tuso;
		float mauso;
	//Phan xu ly
	public:
		void Nhap();
		void Xuat();
		void Kiemtra();
};

void PhanSo::Nhap()
{
	printf("Tu so: ");
	scanf("%f",&tuso);
	printf("Mau so: ");
	scanf("%f",&mauso);
}

void PhanSo::Xuat()
{
	printf("%f / %f",tuso,mauso);
}

void PhanSo::Kiemtra()
{	
	while (mauso == 0)
	{
		printf("\nPhan so khong ton tai\n");
		Nhap();	
	}
	float temp = tuso / mauso;
		if (temp > 0)
		{
			printf("\nPhan so lon hon 0");
		}
		if (temp < 0)
	{
			printf("\nPhan so be hon 0");
		}
		if (temp == 0)
		{
			printf("\nPhan so bang 0");
		}
}

int main()
{
	PhanSo a;
	a.Nhap();
	a.Xuat();
	a.Kiemtra();
}

