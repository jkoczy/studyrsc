#include <stdio.h>
#include <conio.h>

int main()
{
	int tong = 0,x,n,i = 1;
	printf("Nhap 1: ");
	scanf("%d",&x);
	if (x != 1)
	{
		while (x != 1)
		{
			printf("Phai nhap 1: ");
			scanf("%d",&x);
		}
	}
	else
	{
		printf("Nhap N: ");
		scanf("%d",&n);
		while (i <= n)
		{
			tong = tong + x;
			i++;
			x = x * i;
		}
		printf("Tong: %d",tong);
	}
	getch();
}
