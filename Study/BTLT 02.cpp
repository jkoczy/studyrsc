#include<stdio.h>
#include<conio.h>
int main()
{
	float tong=0.0;
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	if (n == 0)
	{
		printf("Khong co ket qua");
	}
	else
	{
		while (n > 0)
		{
			tong = tong + (float)(2*n+1)/(2*n+2);
			n--;
		}
	printf("Ket qua phep tinh: %f",tong);
	}
	getch();
}
