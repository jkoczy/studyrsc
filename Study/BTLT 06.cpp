#include <stdio.h>
#include <conio.h>

int main()
{
	int tong = 0,x = 1;
	while (tong < 1000)
	{
		tong = tong + x;
		x++;
	}
	printf("Nguyen duong x nho nhat sao cho 1 + 2 + 3 + ... + n < 1000: %d",x);
	getch();
}
