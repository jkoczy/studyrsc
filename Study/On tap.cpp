#include <stdio.h>

int main()
{
	int a,b;
	float tinh;
	printf("Tu so a:");
	scanf("%d",&a);
	printf("Mau so b:");
	scanf("%d",&b);
	tinh = a / b;
	//printf("%d\n",tinh);
	if(tinh>0)
	{
		printf("Phan so duong");
	}
	else
	{
		printf("Phan so am");
	}
}
