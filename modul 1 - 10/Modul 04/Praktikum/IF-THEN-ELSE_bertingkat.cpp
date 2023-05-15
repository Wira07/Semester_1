#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a, b, c;
	cout <<"\n Program Mengurutkan Angka Dari Kecil Ke Besar "<<endl;
	cout <<" Masukan 3 angka berturut dengan spasi : \n";
	cout <<" [1] : "; cin >> a;
	cout <<" [2] : "; cin >> b;
	cout <<" [3] : "; cin >> c;
	getch();
	cout <<"\n Urutan Dari yang Terkecil Adalah : ";
	if (a < b && a < b && b < c)
		cout <<" "<< a <<" "<< b <<" "<< c <<endl;
	else if (a < b && a < c && c < b)
		cout <<" "<< a <<" "<< c <<" "<< b <<endl;
	else if (b < a && b < c && a < c)
		cout <<" "<< b <<" "<< a <<" "<< c <<endl;
	else if (b < a && b < c && c < a)
		cout <<" "<< b <<" "<< c <<" "<< a <<endl;
	if (c < a && c << b && a < b)
		cout <<" "<< c <<" "<< a <<" "<< b <<endl;
	else if (c < a && c < b && b < a)
		cout <<" "<< c <<" "<< b <<" "<< a <<endl;
	return 0;
}

				
