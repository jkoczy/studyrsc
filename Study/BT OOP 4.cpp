#include <stdio.h>

class Day
{
	//Du lieu
	private:
		int ngay;
	//Xu ly
	public:
		void nhap();
		void xuat();
		void kiemtra();
};

void Day::nhap()
{
	printf("Nhap ngay:");
	scanf("%d", &ngay);
}

void Day::xuat()
{
	printf(" %d ",ngay);
}

void Day::kiemtra()
{
	if (ngay == 30 || ngay == 31)
	{
		ngay = 1;
	}
	else
	{
		ngay = ngay + 1;
	}
}

int main()
{
	Day Test;
	Test.nhap();
	Test.xuat();
	Test.kiemtra();
	Test.xuat();
}
