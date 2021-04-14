#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100], n, sum = 1;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d",&a[i]);
	}
	do
		{
		if (sum == 3)
		{
			continue;
		}
			printf("%d",a[sum]);
			sum++;
	}while(sum < n);
	getch();
}

