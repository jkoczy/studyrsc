#include <stdio.h>
#include <conio.h>

class DayNight
{
	//phan du lieu:
	private:
		int ngay;
	public:
		void Nhap();
		void Xuat();
		void XuLy();
};

void DayNight::Nhap()
{
	printf("Ngay: ");
	scanf("%d",&ngay);
}

void DayNight::Xuat()
{
	printf("%d\n",ngay);
}

void DayNight::XuLy()
{	
	if (ngay < 31)
	{
		ngay = ngay + 1;
	}
	else
	{
		ngay = 1;
		ngay = ngay + 1;
	}
}

int main()
{
	DayNight a;
	a.Nhap();
	a.Xuat();
	a.XuLy();
	a.Xuat();
	getch();
}

