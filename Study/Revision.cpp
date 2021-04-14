#include <stdio.h>
#include <math.h>
//Array Revision

int Input(int arr[],int a)
{
/*	printf("Nhap so luong:");
	scanf("%d",&a); */
	for (int i = 0; i < a;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int Output(int arr[],int &a)
{
	for (int z = 0; z < a; z++)
	{
		printf("%d",arr[z]);
	}
}
int Xoa(int arr[],int &a, int vitri)
{

	for (int i = vitri; i < a-1; i++)
	{
		arr[i] = arr[i+1];
	}
	/*for (int i = 0; i < a - 1; i++)
	{
		printf("\n%d",arr[i]);
	}*/
	a--;
}
int SimplePlus(int arr[],int z)
{
	int tong = 0;
	for (int i = 0; i < z; i++)
	{
		tong += arr[i];
	}
	printf("\nTong:%d",tong);
}
int Max(int arr[], int t)
{
	int max = arr[0];
	for (int i = 1; i < t; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("\nSo lon nhat trong mang:%d", max);
}
int Max2(int arr[], int t)
{
	int max = arr[0], max2 = arr[0];
	for (int i = 1; i < t; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 1; i < t; i++)
	{
		if (arr[i] > max2 && arr[i] != max)
		{
			max2 = arr[i];
		}
	}
	printf("\nMax 2:%d",max2);
}
int TrickyX(int arr[], int t)
{
	int dem = 0;
	for (int i = 0; i <= t; i++)
	{
		if (arr[i] < 2)
		{
		i++;
		}
		else
		{
		for (int y = 2; y <= sqrt(arr[i]); y++)
		{
			if (arr[i] % y == 0)
			{
			dem++;
			}
		}
		if (dem == 0)
		{
			printf("\n%d",arr[i]);
		}
		dem = 0;
		}
	}
}
int main()
{
	int arr[100],n,vitri,arr2[100];

	printf("Nhap so luong:");
	scanf("%d",&n); 
	Input(arr,n);
	Output(arr,n);
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	SimplePlus(arr,n);
	Max(arr,n);
	Max2(arr,n);
	printf("\nSo nguyen to nho hon %d",n);
	TrickyX(arr,n);
	printf("\nVi tri can xoa:");
	scanf("%d",&vitri);
	Xoa(arr2,n,vitri);
	Output(arr2,n);
}

