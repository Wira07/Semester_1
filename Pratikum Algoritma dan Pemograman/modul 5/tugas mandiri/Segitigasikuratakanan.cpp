#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n, ulang, pilih;
	cout <<"\n | MEMBUAT SEGITIGA SIKU RATA KANAN |\n";
	cout <<" |==================================|\n";
	ulang:
	cout <<"   Masukan Banyak Baris Pola : ";
	cin >> n;
	cout << endl;
	for (int e = 1; e <= n; e++){
		cout <<"\t ";
		for (int g = n; g >= e; g--){
			cout <<" ";
		} 
		for (int y = 1; y <= e; y++){
			cout <<"@";
		}
		cout << endl;
 }getch();
	cout << endl;
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
	getch();
	return 0;
}
