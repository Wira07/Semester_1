#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	string buah[] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	int length = sizeof(buah)/ sizeof(*buah);
	string dtCari;
	int hasilCari, ulang;
	cout <<"\n * MENCARI KARAKTER A - Z * "<< endl;
	cout <<" |=========================| "<< endl;
	show:
	cout <<"\n Masukan Karakter : ";
	cin  >> dtCari;
	for(int b = 0; b < length; b++){
		if(dtCari == buah[b]){
			hasilCari++;
		}
	}
	if(hasilCari == 0){
		cout <<" Tidak Ditemukan "<< endl;
	}else {
		cout <<" Karakter "<< dtCari <<" Ditemukan pada";
		for(int c = 0; c < length; c++){
			if(dtCari == buah[c]){
				cout <<" Urutan Ke "<< (c+1) << endl;
			}
		}
	}
	cout <<"\n Mau Coba Lagi ? [y/n] : ";
	ulang = getch();
	if(ulang == 'y'){
		cout << endl;
		goto show;
	}if(ulang == 'n'){
		cout <<" T E R I M A K A S I H "<< endl;
	}
	cin.get();
	return 0;
}
/*for(int a = 0; a < length; a++){
		cout <<" ["<< (a+1) <<"]"<< buah[a] << endl;
	}*/