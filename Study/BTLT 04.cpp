#include <stdio.h>
#include <conio.h>

int main()
{
	int n,x,y,i=1;
	printf("Nhap N: ");
	scanf("%d",&n);
	while (i < n)
	{
		y = n % i;
		x = n / i;
		if (y == 0)
		{
			printf("%d %d\n",i,x);
		}
		i++;
		
	}
	getch();
}
