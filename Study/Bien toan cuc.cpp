//Khoi khai bao
#include <iostream>
#include <conio.h>
using namespace std;
//Bien toan cuc
int toan;
int van;
float dtb;
string hoten;
//Khoi ham main
int main()
{
	/* Bien cuc bo
	int toan;
	int van;
	float dtb;
	string hoten;
	*/
	cout <<"Nhap ho ten: ";
	getline(cin,hoten);
	cout <<"Nhap toan: ";
	cin >> toan;
	cout <<"Nhap van: ";
	cin >> van;
	dtb = (float)(toan + van) / 2;
	cout <<"\nHo ten: "<<hoten;
	cout <<"\n Toan: "<<toan;
	cout <<"\n Van: "<<van;
	cout <<"\n Trung Binh: "<<dtb;
	getch();
}
