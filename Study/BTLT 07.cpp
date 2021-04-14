#include <stdio.h>
#include <conio.h>

int main()
{
	int i = 1;
	printf("So le khong chia het boi 100\n");
	while (i <= 100)
	{
		if (100 % i != 0)
		{
			{
				printf("%d\n",i);
			}
		}
		i++;
	}
	getch();	
}
