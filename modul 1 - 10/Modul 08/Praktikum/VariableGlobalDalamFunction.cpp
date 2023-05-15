#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int a = 9;
void lokal(){
	a + 90;
}
int main(){
	cout <<"\n Menggunakan Varibale Global "<< endl;
	cout <<" Nilai a Didalam Fungsi Main () : "<< a; 
	lokal();
	cout <<"\n Nilai a Setelah Pemanggilan Fungsi Lokal () :"<< a;
	cin.get();
	cout <<"\n Nilai Ini Terlihat Bahwa Variable a Dideklarasikan Diluar ";
	cout <<"\n Fungsi Main (), Dapat Digunakan Dalam Funsi Main dan Fungsi Lokal ";
	cin.get();
}

