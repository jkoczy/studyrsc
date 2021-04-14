#include <stdio.h>
#include <conio.h>

class CHocSinh
{
	//Phan du lieu
	private:
		char hoten [31];
		int toan;
		int van;
		float dtb;
	//Phan xu ly
	public:
		void Nhap ();
		void Xuat ();
		void XuLy ();
};

void CHocSinh::Nhap()
{
	printf("Ho ten: ");
	gets(hoten);
	printf("Diem toan: ");
	scanf("%d",&toan);
	printf("Diem van: ");
	scanf("%d",&van);
}

void CHocSinh::XuLy()
{
	dtb =(float) (toan + van) / 2;
}

void CHocSinh::Xuat()
{
	printf("\n%s",hoten);
	printf("\nToan: %d",toan);
	printf("\nVan: %d",van);
	printf("\nDTB: %f",dtb);
	fflush(stdin);
	printf("\n");
}

int main()
{
	CHocSinh a,b;
	a.Nhap();
	a.XuLy();
	a.Xuat();
	b.Nhap();
	b.XuLy();
	b.Xuat();
}
