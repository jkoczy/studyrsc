#include <iostream>
 
using namespace std;
 
int main ()
{
   // khai bao cac bien
   int    i;
   double d;
 
   // khai bao cac bien tham chieu
   int&    r = i;
   double& s = d;
   
   i = 5;
   cout << "Gia tri cua i la: " << i << endl;
   cout << "Gia tri cua tham chieu toi i la: " << r  << endl;
 
   d = 11.7;
   cout << "Gia tri cua d : " << d << endl;
   cout << "Gia tri cua tham chieu toi d la: " << s  << endl;
   
   return 0;
}
