#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n, ulang, pilih;
	ulang:
	cout <<" Mauskan Baris Pola : ";
	cin >> n;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (i == 1 || j == 1 || j == i){
				cout <<"!";
			}else {
				cout <<".";
			}
		}
		cout << endl;
	}


	cout << endl;
	cout <<" Coba Lagi [1]\n";
	cout <<" Keluar [2]\n";
	cout <<" Pilih : "; cin >> pilih;
	if (pilih == 1){
		goto ulang;
	}else {
		cout<<"";
	}

	getch();
	return 0;
}
/*
if (i == 0 || j == 1 || j == i){
				cout <<"!";
				*/