#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int t, l;
	cout <<"\n | MEMBUAT BUJUR SANGKAR |\n";
	cout <<" |=======================|\n";
	ulang:
	cout <<" Masukan Tinggi : ";cin >> t;
	cout <<" Masukan Lebar  : ";cin >> l;
	// PROSES
	// BINGKAI ATAS
	cout << endl;
	for (int kolom = 1; kolom <= 2*l; kolom++){
		cout <<"#";
	}
	cout << endl;
	// BINGKAI KIRI KANAN
	for (int baris = 2; baris <= t - 1; baris++){
		cout <<"#";
		for (int kolom = 1; kolom <= 2*l-2; kolom++)
			cout <<" ";
		cout <<"#"<< endl;
	}
	// BIGKAI BAWAH
	for (int kolom = 1; kolom <= 2*l; kolom++){
		cout <<"#";
	}
}
