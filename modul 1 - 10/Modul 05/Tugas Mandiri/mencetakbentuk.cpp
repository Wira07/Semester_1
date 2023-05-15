#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n, ulang, pilih;
	cout <<" | MEMBUAT POLA |\n";
	cout <<" |==============|\n";
	ulang:
	cout <<" Masukan Banyak Baris Pola : ";
	cin >> n;
	for (int x = 1; x <= n; x++){
		cout <<" "; // spaci buat jarak polaS
		for (int y = 1; y <= n; y++){
			if (x == 1 || y == 1 || y == x && n <= 20){
				cout <<"*";
			}else {
				cout <<" ";
			}
		}
		cout << endl;
	}
	// TINFC 2020 03 / C
	cout <<" Coba Lagi [1]\n";
	cout <<" Keluar [2]\n";
	cout <<" Pilih : ";cin >> pilih;
	if (pilih == 1){
		goto ulang;
	}else if (pilih == 2){
		cout <<" ";
	}else {
		cout <<" ";
	}
	return 0;
	getch();
}
