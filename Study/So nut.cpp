#include <stdio.h>

int main()
{
	int x,tong=0;
	printf("Nhap so: ");
	scanf("%d",&x);
	if (x > 9999)
	{
		while (x > 9999)
		{
			printf("Nhap lai so: ");
			scanf("%d",&x);
		}
		while (x!=0)
		{
			tong = tong + x%10;
			x = x / 10;
		}
	}
	else
	{
		while (x!=0)
		{
			tong = tong + x%10;
			x = x / 10;
		}
	}
	tong = tong % 10;
	printf("So nut: %d",tong);
}
