#include <stdio.h>
#include <conio.h>
struct DMY
{
	int ngay;
	int thang;
	int nam;
};
void Nhap(DMY &a)
{
	printf("Ngay: ");
	scanf("%d",&a.ngay);
	printf("Thang: ");
	scanf("%d", &a.thang);
	printf("Nam: ");
	scanf("%d", &a.nam);
}
void Xuat(DMY a)
{
	printf("%d/%d/%d\n",a.ngay,a.thang,a.nam);
	
}
int Kiemtra(DMY a)
{
	if (a.nam % 4 == 0 && a.nam % 100 != 0)
	{
		return 1;
	}
	if (a.nam % 400 == 0)
	{
		return 1;
	}
	return 0;
}
DMY NgayMoi (DMY a)
{
	int THANG[12] = {31, 28, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31};
	if (Kiemtra(a) == 1)
	{
		THANG[1] = 29;
	}
	a.ngay++;
	if (a.ngay > THANG[a.thang - 1])
	{
		a.thang++;
		if(a.thang > 12)
		{
			a.nam++;
			a.thang = 1;
		}
		a.ngay = a.ngay - THANG[a.thang - 1];
	}
	return a;
	
}
DMY NgayHomQua (DMY a)
{
	int THANG[12] = {31, 28, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31};
	if (Kiemtra(a) == 1)
	{
		THANG[1] = 29;
	}
	a.ngay--;
	if (a.ngay > THANG[a.thang - 1])
	{
		if(a.thang == 1)
		{
			a.nam--;
			a.thang = 12;
		}
		a.ngay = a.ngay - THANG[a.thang -1];
		
	}
	return a;
}
int main()
{
	DMY x;
	Nhap(x);
	Kiemtra(x);
	DMY b = NgayMoi(x);
	Xuat(b);
	DMY c = NgayHomQua(x);
	Xuat(c);
	getch();
}
