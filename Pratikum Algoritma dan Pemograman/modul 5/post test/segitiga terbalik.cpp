#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
main(){
	int n, a, b, c;
	cout <<"\n PROGRAM MEMBUAT SEGITIGA SAMA SISI TERBALIK \n";
	cout <<" ============================================ \n";
	cout <<" Masukan Jumlah Baris Dolar ($) : ";
	cin >> n; 
	cout << endl;
	for (a = 0; a <= n; a++){
		for (b = 0; b <= a; b++){
			cout <<" ";
		}for (c = 0; c >= (a-n); c--){
			cout <<"$";
		}for (c = 0; c < (n - a); c++){
			cout <<"$";
		}cout << endl;
	}
}

