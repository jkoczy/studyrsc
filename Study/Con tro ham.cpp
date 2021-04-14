/* Khoi tao 2 so */
#include <stdio.h>
#include <conio.h>
int init(int *px, int *py)
{
*px = 3; //gan 3 cho noi dung cua px
*py = 5; //gan 5 cho noi dung cua py
}

int main()
{
int ix, iy;
init(&ix, &iy);
printf("x = %d, y = %d\n", ix, iy);
getch();
}

