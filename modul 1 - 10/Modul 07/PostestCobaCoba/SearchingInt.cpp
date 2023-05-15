#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	int data[] = {6, 2, 8, 5, 4, 0, 9, 3, 1, 7};
	int length = sizeof(data)/ sizeof(*data);
	int dtCari;
	int hasilCari;

	cout <<"\n * MENCARI KARAKTER A - Z * "<< endl;
	cout <<" |=========================| "<< endl;
	for (int a = 0; a < length; a++){
		cout <<"["<< a+1 <<"]"<< data[a] << endl;
	}
	cout <<" Cari Nama Gunung : ";
	cin  >> dtCari;
	for (int b = 0; b < length; b++){
		if (dtCari == data[b]){
			hasilCari++;
		}
	}
	if (hasilCari == 0){
		cout <<" Data Tidak Ditemukan "<< endl;
	}else {
		cout <<" Data "<< dtCari <<" Ditemukan di : ";
		for (int c = 0; c < length; c++){
			if (dtCari == data[c]){
				cout <<" Index Ke "<< c << endl;
			}
		}
	}

	cin.get();
	return 0;
}
// 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'