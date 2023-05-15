#include <iostream>
#include <stdio.h>
using namespace std;

void sayHello(char[]); // Deklarasi Fungsi sayHello()
void sayHello(char nama[]) // Definisi Fungsi sayHelllo
	{
		printf("\n Selamat Datang Di Fakultas Ilmu Komputer, %s",nama );
		cout << endl;
}
int main(){
	char n[50];
	cout <<"\n Masukan Nama Anda : ";
	gets(n);
	sayHello(n);
	}
	
