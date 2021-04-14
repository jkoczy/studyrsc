#include <stdio.h>
#include <conio.h>

int main()
{
	int x,n,temp=1,temp01;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap so mu: ");
	scanf("%d",&n);
	temp01 = n;
	while (temp01 > 0)
	{
		temp = temp * x;
		temp01--;
	}
	printf("%d mu %d: %d",x,n,temp);
	getch();
}
