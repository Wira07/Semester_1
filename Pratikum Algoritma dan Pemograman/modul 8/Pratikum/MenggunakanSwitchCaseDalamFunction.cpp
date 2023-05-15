#include <iostream>
#include <conio.h>
using namespace std;
int segitiga (int alas, int t){
	int LS;
	LS = 0.5 * alas * t;
	return LS;
}
int persegi (int s){
	int LP;
	LP = s * s;
	return LP;
}
int main(){
	int a;
	float lagi, LP, LS, alas, t, s;
	char ulang;
	show:
	cout <<"\n 1. Menghitung Luas Persegi. "<< endl;
	cout <<" 2. menghitung Luas Segitiga. "<< endl;
	cout <<"\n Masukan Pilihan : "; cin >> a;

	switch (a){
		case 1: 
		cout <<" Masukan Sisi : ";cin >> s;
		LP = persegi (s);
		cout <<" Luas Persegi Adalah "<< LP << endl;
		break;
		case 2: 
		cout <<" Masukan ALas : "; cin  >> alas;
		cout <<" Masukan Tinnggi : "; cin >> t;
		LS = segitiga (alas, t);
		cout <<" Luas Persegi Adalah "<< LS << endl;
		break;
	}

	cout <<"\n Mau Mencoba Lagi ? [Y/T] : ";
	ulang = getch();
	if (ulang == 'Y' || ulang == 'y')
	{
		cout << endl;
		goto show;
	}
	if (ulang == 'T' || ulang == 't')
	{
		cout <<" T E R I M A K A S I H "<< endl;
	}
}
