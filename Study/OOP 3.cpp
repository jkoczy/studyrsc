#include <stdio.h>
#include <conio.h>
#include <math.h>

class ToaDo
{
	private:
		int x;
		int y;
	public:
		void Nhap ();
		void Xuat ();
		float Khoangcach (ToaDo);
};

void ToaDo::Nhap()
{
	float temp;
	printf("Hoanh do: ");
	scanf("%d",&x);
//	x = temp;
	printf("Tung do: ");
	scanf("%d",&y);
//	y = temp;
}

float ToaDo::Khoangcach(ToaDo P)
{
	return sqrt((x-P.x)*(x-P.x)+ (y - P.y)*(y - P.y));
}

void ToaDo::Xuat()
{
	printf("\nToa do x: ",x);
	printf("\nToa do y: ",y);
}

int main()
{
	ToaDo A,B;
	A.Nhap();
	B.Nhap();
	float khoangcach = B.Khoangcach(A);
	printf("Khoang cach: %f",khoangcach);
}
