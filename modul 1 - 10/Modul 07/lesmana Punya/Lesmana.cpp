#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	show:
	string judul[10], cari, tmp;
	int ulang, banyak,  R, ketemu=0;
	int jumData = sizeof(judul)/ sizeof(*judul);
	cout <<"\n Masukan Banyak Judul : "; 
	cin  >> banyak;
	for(int i = 1; i <= banyak; i++){
		cout <<" Masukan Judul Ke "<< i <<". ";
		cin.ignore(1, '\n');
		getline(cin, judul[i]);
	}
	cout <<"\n Nilai Elemen ";
	for(int i = 0; i <= banyak; i++){
		cout <<" ";
		cout << judul[i]<< endl;
	}

	for(int i = 0; i < banyak; i++){
		for(int j = i; j < banyak; j++){
			if(judul[i] > judul[j]){
				tmp = judul[i];
				judul[i] = judul[j];
				judul[j] = tmp;
			}
		}
	}

	cout <<"\n Diurutkan : ";
	for(int i = 0; i <= banyak; i++){
		cout <<" ";
		cout << judul[i] << endl;
	}

	cout <<"\n Cari Judul : "; cin >> cari;
	for(int i = 0; i < banyak; i++){
		if(judul[i] == cari){
			ketemu = 1;
			cout <<" Judul ["<< cari <<"] Ditemukan Pada Index Ke ";
			cout << i <<"."<< endl;
			break;
		}
	}
	if(ketemu == 0){
		cout <<" Judul Tidak Ditemukan "<< endl;
	}

	cout <<"\n Coba Lagi ? [y/n] : ";
	ulang = getch();
	if(ulang == 'y'){
		cout << endl;
		goto show;
	}if(ulang == 'n'){
		cout <<" THX "<< endl;
	}
	cin.get();
	return 0;
}
