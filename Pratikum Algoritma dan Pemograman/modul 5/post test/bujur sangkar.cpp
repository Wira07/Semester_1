#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
main (){
	int n;
	cout <<"\n MEMBUAT PROGRAM MENAMPILKAN BUJUR SANGKAR \n";
	cout <<" ========================================= \n";
	cout <<" Masukan Jumlah Baris : ";
	cin >> n;
	//BARIS PERTAMA
	for (int i = 0; i < 2*n; i++){
		cout <<"@";
	}
	cout << endl;
	for (int i = 0; i < n - 2; i++){
		cout <<"@";
		//SPACE
		for (int j = 0; j < 2 * n - 2; j++){
		cout <<" ";
		}
		cout <<"@";
		cout << endl;
	}
	//BARIS TERAKHIR
	for (int i = 0; i < 2*n; i++){
		cout <<"@";
	}
	cout << endl;
	return 0;
}

