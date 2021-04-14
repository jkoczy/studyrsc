#include <stdio.h>

void Nhap(int a,int c, int b[][50])
{
	for (int i = 0; i < a; i++)
	{
		for (int t = 1;t <= c;t++)
		{
		scanf("%d",&b[i][t]);
		}
	}
}

void Xuat(int a,int c, int b[][50])
{
	for (int i = 0; i < a;i++)
	{
		for (int t = 1;t <= c; t++)
		{
		
		printf("[%d][%d]:%d\n",i,t,b[i][t]);
		}
	}
}
int main()
{
	int x,y,b[50][50];
	printf("Nhap cot: ");
	scanf("%d",&x);
	printf("Nhap hang: ");
	scanf("%d",&y);
	Nhap(x,y,b);
	Xuat(x,y,b);
}
