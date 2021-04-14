#include <stdio.h>

class PhanSo
{
	//Du lieu
	public:
		int ts;
		int ms;
	//Xu ly
	public:
		void nhap();
		void xuat();
};

void PhanSo::nhap()
{
	printf("Tu so: ");
	scanf("%d",&ts);
	printf("Mau so: ");
	scanf("%d",&ms);
}

void PhanSo::xuat()
{
	printf("%d / %d\n",ts,ms);
}

int SoSanh(PhanSo A, PhanSo B)
{
	A.ts = A.ts * B.ms;
	B.ts = B.ts * A.ms;
	if(A.ts > B.ts)
	{
		printf("Phan so A lon hon phan so B");
	}
	else
	{
		printf("Phan so B lon hon phan so A");
	}
}

main()
{
	PhanSo A,B;
	A.nhap();
	A.xuat();
	B.nhap();
	B.xuat();
	SoSanh(A,B);
	
}
