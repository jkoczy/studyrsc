#include <stdio.h>
#include <conio.h>
#include <math.h>

struct TOADO
{
	float  x; //tung do
	float  y; //hoanh do
};

void Nhap(TOADO &a)
{
	printf("Tung do: ");
	scanf("%f",&a.x);
	printf("Hoanh do: ");
	scanf("%f",&a.y);
}


TOADO Tinh(TOADO a, TOADO b)
{
	float kq = sqrt((b.x-a.x)*(b.x-a.x) + (b.y - a.y)*(b.y-a.y));
	printf("%.5f",kq);
}
int main()
{
	TOADO a;
	Nhap(a);
	TOADO b;
	Nhap(b);
	Tinh(a,b);
	getch();
	
}
