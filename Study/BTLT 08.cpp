#include <stdio.h>
#include <conio.h>
void Nhap(int &a)
{
	printf("NHap x: ");
	scanf("%d",&a);	
}
void Xuat(int a)
{
	printf("X da nhap: %d\n",a);
}

int tinh (int a)
{
	int tong = 5 + a;
	printf("%d\n",tong);
}

int Sum (int &a)
{
	a = a + 6;
	printf("New X:%d",a);
}
int main()
{
	int x;
	Nhap(x);
	Xuat(x);
	tinh(x);
	Sum(x);
	getch();
}
