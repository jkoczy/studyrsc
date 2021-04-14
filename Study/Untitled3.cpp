#include <stdio.h>
#include <conio.h>

int main()
{
	int tong=0,x,n,temp;
	printf("Nhap so: ");
	scanf("%d",&x);
	printf("Nhap so mu: ");
	scanf("%d",&n);
	int i = 0;
	temp = x;
	while(i < n)
	{
		tong = tong + x;
		x = x * temp;
		i++;
	}
	
	printf("Tong: %d",tong);
	getch();
}
