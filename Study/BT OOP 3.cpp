#include <stdio.h>
#include <conio.h>
#include <math.h>

class Coordinate
{
	//phan du lieu
	private:
		int tungdo;
		int hoanhdo;
	//phan xu ly
	public:
		void Nhap();
		float Distance(Coordinate);	
};

void Coordinate::Nhap()
{
	printf("Tung do: ");
	scanf("%d",&tungdo);
	printf("Hoanh do: ");
	scanf("%d",&hoanhdo);
}

float Coordinate::Distance(Coordinate P)
{
	return sqrt((tungdo - P.tungdo)*(tungdo - P.tungdo)+(hoanhdo - P.hoanhdo)*(hoanhdo - P.hoanhdo));
}

int main()
{
	Coordinate A,B;
	A.Nhap();
	B.Nhap();
	float kq = B.Distance(A);
	printf("Khoang cach: %f",kq);
}
