#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int a, b, c, pilih, ulang;
	ulang:
	cout <<"\n Program Mengurutkan Angka Dari Kecil Ke Besar "<<endl;
	cout <<"#==============================================#\n";
	cout <<" Masukan Tiga Bilangan : \n";
	cout <<" [1] : "; cin >> a;
	cout <<" [2] : "; cin >> b;
	cout <<" [3] : "; cin >> c;
	//IF THEN ELSE BERTINGKAT
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
		cout <<" --------------------------------- \n";
	getch();
	//PEMILIHAN
	cout <<" Coba Lagi [1]\n ";
	cout <<" keluar [2]\n ";
	cout <<" Pilih : "; cin >>pilih;
	if (pilih == 1) {
		goto ulang;
	} if(pilih == 2) {
		cout <<"\n Terima Kasih Telah Menggunakan Program Ini\n ";
		cout <<"-------------------------------------------\n ";
	}getch();
	return 0;
}

				
