#include <stdio.h>

//tham tri thay doi gia tri ban dau cua no (a)
//tham bien thi khong doi (b)

void thambien (int &a, int b)
{
	int loop = 0;
	while(loop < b)
	{
	a+=1;
	loop++;
	}
}

int main()
{
	int num,lap;
	printf("Nhap so:");
	scanf("%d",&num);
	thambien(num,num);
	printf("Ket qua:%d",num);
}
