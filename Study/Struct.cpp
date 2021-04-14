#include <stdio.h>

struct PHANSO
{
	int TUSO;
	int MAUSO;
};
void Nhap(PHANSO &a)
{
	printf("Tu so:");
	scanf("%d",&a.TUSO);
	printf("Mau so: ");
	scanf("%d",&a.MAUSO);
}
void Xuat(PHANSO a)
{
	printf("%d/%d",a.TUSO, a.MAUSO);
	
}
void Kiemtra(PHANSO a)
{
	if(a.MAUSO == 0)
	{
		printf("\nMau so khong duoc bang 0");
		Nhap(a);
	}
	else 
	{
		float d = a.TUSO / a.MAUSO;
		//printf("%f",d);
		if(d > 0)
		{
			printf("\nPhan so duong");
		}
		else if (d < 0)
		{
			printf("\nPhan so am");
		}
		else
		{
			printf("\nPhan so bang 0");
		}
	}
}
int main()
{
	PHANSO x;
	Nhap(x);
	Xuat(x);
	Kiemtra(x);
	
}
