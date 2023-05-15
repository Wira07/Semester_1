#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
	char name[10][10], temp[10], namaCari[10];
	int found, R,  j, data, n;
	data = 0;
	cout <<"\n * PROGRAM SEARCHING DENGAN METODE BINARY SEARCH * \n";
	cout <<"\t  PADA KEHIDUPAN SEHARI HARI "<< endl;
	cout <<" |==============================| \n";
	cout <<"\n Masukan Banyak Data : ";
	cin  >> n;
	for(int i = 1; i <= n; i++){
		cout <<" Nama "<< i-1 <<". ";
		gets(name[i]);
	}
	// Proses Pengurutan Data (Sorting)
	for( j = 1; j < 10; j++){
		for(int i = 0; i < 10 - j; i++){
			R = strcmp (name[i], name[i+1]);
			if(R > 0){
				strcpy(temp, name[i]);
				strcpy(name[i], name[i+1]);
				strcpy(name[i+1], temp);
			}
		}
	}
	// Proses Menampilkan Data Yang Telah Terurut 
	cout <<"\n Diurutkan (Sorting):\n";
	for(int i = 0; i < 10; i++){
		if(i == 9){
			cout <<" "<< (i+1) <<". "<< name[i];
		}else {
			cout <<" "<< (i+1) <<". "<< name[i];
		}
		cout << endl;
	}
	cout << endl;

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
/*
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
	char name[10][10], temp[10], namaCari[10];
	int found, R, i, j, data;
	data = 0;
	cout <<"\n * PROGRAM SEARCHING DENGAN METODE BINARY SEARCH * \n";
	COUT <<"\t  PADA KEHIDUPAN SEHARI HARI "<< endl;
	cout <<" |==============================| \n";
	cout <<"\n Masukan Data Nama : \n";
	// Proses Input Data
	for( i = 0; i < 10; i++){
		cout <<" Nama "<< (i+1) <<". ";
		gets(name[i]);
	}
	// Proses Pengurutan Data (Sorting)
	for( j = 1; j < 10; j++){
		for( i = 0; i < 10 - j; i++){
			R = strcmp (name[i], name[i+1]);
			if(R > 0){
				strcpy(temp, name[i]);
				strcpy(name[i], name[i+1]);
				strcpy(name[i+1], temp);
			}
		}
	}
	// Proses Menampilkan Data Yang Telah Terurut 
	cout <<"\n Diurutkan (Sorting):\n";
	for(i = 0; i < 10; i++){
		if(i == 9){
			cout <<" "<< (i+1) <<". "<< name[i];
		}else {
			cout <<" "<< (i+1) <<". "<< name[i];
		}
		cout << endl;
	}
	cout << endl;

	// Proses Pencarian Data
	cout <<" Siapa Yang Ingin Anda Cari ? : ";
	gets(namaCari);
	for(i = 0; i < 10; i++){
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

*/