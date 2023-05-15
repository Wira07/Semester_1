#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
	char name[10][10], temp[10], namaCari[10];
	int found,data = 0;
	cout <<"\n * PROGRAM PENCARIAN DENGAN MENGGUNAKAN  * \n";
	cout <<"\t  VARIABLE DIMENSI SATU "<< endl;
	cout <<" |==============================| \n";

	// Proses Input Data
	cout <<"\n Masukan 10 Data Buah : \n";
	for(int i = 0; i < 10; i++){
		cout <<" Nama "<< (i+1) <<". ";
		gets(name[i]);
	}
	
	// Proses Menampilkan Data Yang Telah Terurut 
	

	// Proses Pencarian Data
	cout <<" Siapa Yang Ingin Anda Cari ? : ";
	gets(namaCari);
	for(int i = 0; i < 10; i++){
		if(strcmp(namaCari, name[i]) == 0){
			found = 1;
			data = i;
			break;
		}
	}
	if(found == 1){
		cout <<" "<< name[data];
		cout <<", Ditemukan Pada Indeks Ke ";
		cout << data + 1  <<"."<<
		 endl;
	}else {
		cout <<" Nama Tidak Ditemukan "<< endl;
	}
	cin.get();
	return 0;
}
