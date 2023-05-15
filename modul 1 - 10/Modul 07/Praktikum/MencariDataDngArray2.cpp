#include <iostream>
using namespace std;

int main(){
	int i, n, cari, posisi, ketemu=0;
	int data[n];
	cout <<" Banyaknya Data : ";
	cin  >> n;

	// Input Data
	for (int i = 0; i < n; i++){
		cout <<" Masukan Data Ke ["<< i++ <<"] : ";
		cin  >> data[i];
	}
	cout <<" Data Yang Dicari = ";;
	cin  >> cari;
	ketemu = 0;
	i = 0;
	while((ketemu == 0) && (i < n)) {
	    if (data[i] == cari){
	    	ketemu = 1;
	    	posisi = 1;
	    }
	    else i = i + 1;
	}
	if (ketemu == 0){
		cout <<" Data Yang Dicari Tidak Ditemukan "<< endl;
	}
	else {
		cout <<" Data Yang Dicari  Ditemukan "<< endl;
		cout <<" Data Pada Posisi "<< posisi + 1 << endl;
	}

	cin.get();
	return 0;
	}
