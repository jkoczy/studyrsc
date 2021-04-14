#include<stdio.h>
#include<conio.h>
int main()
{
	   
	int* pointer = NULL; // Khai báo con tr? pointer có th? tr? d?n ô nh? ki?u int. Con tr? này chua du?c kh?i t?o vì pointer chua tr? di dâu c?

	int x = 1;
	int* q = NULL; // q là con tr? NULL. Cách làm vi?c v?i con tr? an toàn là t?t nh?t khai báo và cho con tr? tr? d?n NULL

	// Cho con tr? q tr? d?n bi?n x
	q = &x;

	// Toán t? * là toán t? l?y ra giá tr? mà con tr? dang tr? d?n
	int y = 2;
	q = &y;
	printf("%d\n",*q);

	pointer = q;
	
	printf("Gia tri ma con tro pointer dang tro den la : %d\n",*pointer);
	printf("Dia chi cua y : %d\n",&y);
	printf("Dia chi con tro pointer : %d\n",*pointer);
	printf("Dia chi chinh cua con tro pointer : %d\n",&pointer);
	getch();
}
