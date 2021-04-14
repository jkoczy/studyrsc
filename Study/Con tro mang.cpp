#include<stdio.h>
#include<conio.h>
using namespace std;

//a + i <=> &a[0 + i] ;

//*(a+i) <=> a[i]

void NhapMang(int* a, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf( "Nhap a[%d]: \n", i);
		scanf("%d",a+i);
	}
}

void XuatMang(int* a, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d",*(a+i));
	}
}

int main()
{
	int *a = NULL;
	int n = 0;
	do{
		printf( "Nhap so luong phan tu:\n");
		scanf("%d",&n);
		if(n < 0)
		printf( "So luong la phai >= 0!\n");
	}while(n < 0);
	a = new int[n];	// Xin cap phát n ô nho kieu int o vùng nho HEAP
	NhapMang(a, n);
	XuatMang(a, n);
	if(a != NULL)
	{
		delete[] a;	// Thu h?i n ô nh? v?a xin c?p phát tru?c dó 
	}

	getch();
	return 0;
}
