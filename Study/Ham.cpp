//Khoi khai bao
#include <iostream>
#include <conio.h>
using namespace std;

//Ham
void Nhap(string&,int&,int&);
void XuLy(int,int,float&);
void Xuat(string,int,int,float);

int main()
{
	string ht;
	int t,v;
	float dtb;
	Nhap(ht,t,v);
	XuLy(t,v,dtb);
	Xuat(ht,t,v,dtb);
	getch();
}

void Xuat(string hoten,int toan,int van,float dtb)
{
	cout <<"\nHo ten: "<<hoten;
	cout <<"\nToan: "<<toan;
	cout <<"\nVan: " <<van;
	cout <<"\nDTB: "<<dtb;
}

void Nhap(string& hoten,int& toan, int& van)
{
	cout <<"\nNhap ten: ";
	getline(cin,hoten);
	cout <<"\nToan: ";
	cin >>toan;
	cout <<"\nVan: ";
	cin >>van;
}

void XuLy(int toan,int van,float& dtb)
{
	dtb = (float)(toan+van)/2;
}
