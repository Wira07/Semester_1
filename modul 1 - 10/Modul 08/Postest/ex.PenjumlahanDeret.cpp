#include <iostream>
#include <conio.h>
using namespace std;

// Deklarasi Fungsi
int deret(int n){
	if(n == 0){
		return 0;
	}else 
		return n + deret (n - 1);
}
int main(){
	show:
	int n, ulang;
	cout <<"\n * PENJUMLAHAN DERET BILANGAN * "<< endl;
	cout <<" +----------------------------+ "<< endl;
	cout <<"\n Input Banyak Deret : "; cin >> n;
	cout <<" Hasil : \n"; 
	for(int a = 1; a < n; a++){
		cout <<" "<< a ;
		cout <<" + ";
	}
	cout << n <<" = "<< deret(n);
	cout << endl << endl;
	// Ulang Program
	cout <<" Mau Coba Lagi ? [y/n] : ";
	ulang = getch();
	if(ulang == 'y'){
		cout << endl;
		goto show;
	}
	if(ulang == 'n'){
		cout <<" T E R I M A K A S I H "<< endl;
	}
	cin.get();
	return 0;
} 
