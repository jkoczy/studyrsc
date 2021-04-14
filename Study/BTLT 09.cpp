#include <stdio.h>
#include <conio.h>

void Xuat(int x)
{
	printf("%d\n",x);
}

int Exe(int &x)
{
	x = x + 1;
	printf("After\n");
	return x;
}

int main()
{
	int a;
	printf("Nhap X: ");
	scanf("%d",&a);
	Xuat(a);
	Exe(a);
	Xuat(a);
	getch();
}
