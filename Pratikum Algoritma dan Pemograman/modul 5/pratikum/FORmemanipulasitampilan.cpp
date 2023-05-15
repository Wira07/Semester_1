#include <iostream>
using namespace std;
main (){
	int tinggi, lebar;
	cout <<" Tinggi Kotak : ";
	cin >> tinggi ;
	cout <<" Lebar Kotak : ";
	cin >> lebar;

	int baris, kolom;
	//BUAT BINGKAI ATAS
	for (kolom = 1; kolom <= lebar; kolom++)
		cout <<" "<<"@";
	cout << endl;
	//BUAT KIRI DAN KANAN UNUK
	//BARIS = 2 s/d (TINNGGI - 1)
	for (baris = 2; baris <= tinggi - 1; baris++){
		cout <<" @";
		for (kolom = 2; kolom <= lebar - 1; kolom++)
			cout <<"  ";
		cout <<" @"<< endl;
	}
	//BUAT BIGKAI BAWAH
	for (kolom = 1; kolom <= lebar; kolom++)
		cout <<" @";
	cout << endl;

}
