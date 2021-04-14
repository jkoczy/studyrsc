#include <stdio.h>
#include <conio.h>

int main()
{
	int tong = 0,x,i = 1;
	printf("Nhap N: ");
	scanf("%d",&x);
	while (i < x)
	{
		if (x % i == 0)
		{
			tong = tong + i;
		}
		i++;
	}
	printf("Tong cac uoc cua %d: %d",x,tong);
	getch();
}
