#include <stdio.h>
#include <conio.h>

struct HOPSUA
{
	char brand[99];
	int weight;
};

void Nhap(HOPSUA &a)
{
	printf("Ten nhan hieu: ");
	gets(a.brand);
	printf("Khoi luong:");
	scanf("%d",&a.weight);
}

void Xuat(HOPSUA a)
{
	printf("Nhan hieu: ");
	puts(a.brand);
	printf("Khoi luong: %d",a.weight);
}

int main()
{
	HOPSUA b;
	Nhap(b);
	Xuat(b);
	getch();
}
