#include<stdio.h>
#include<conio.h>
int main()
{
	   
	int* pointer = NULL; // Khai b�o con tr? pointer c� th? tr? d?n � nh? ki?u int. Con tr? n�y chua du?c kh?i t?o v� pointer chua tr? di d�u c?

	int x = 1;
	int* q = NULL; // q l� con tr? NULL. C�ch l�m vi?c v?i con tr? an to�n l� t?t nh?t khai b�o v� cho con tr? tr? d?n NULL

	// Cho con tr? q tr? d?n bi?n x
	q = &x;

	// To�n t? * l� to�n t? l?y ra gi� tr? m� con tr? dang tr? d?n
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
