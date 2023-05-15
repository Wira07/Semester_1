#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	show:
	string buah[] = {"mangga","apel","durian","jeruk","anggur","pisang","semangka","pepaya","nanas","pir"};
	int length = sizeof(buah)/ sizeof(*buah);
	string dtCari;
	int hasilCari=0, ulang;
	cout <<"\n * Nama Nama Buah * "<< endl;
	cout <<" |================| "<< endl;
	for(int a = 0; a < length; a++){
		cout <<" "<< a+1 <<". "<< buah[a] << endl;
	}	
	cout <<"\n Cari Nama Buah : ";
	cin  >> dtCari;
	for(int b = 0; b < length; b++){
		if(dtCari == buah[b]){
			hasilCari=1;
			cout <<" Buah ["<< dtCari <<"] Ditemukan pada";
			cout <<" Nomer Ke "<< b <<"."<< endl;
			break;
		}
	}
	if(hasilCari == 0){
		cout <<" Buah ["<< dtCari <<"] Tidak Ditemukan "<< endl;
	}
	// Pemilihan Dengan Boolean
	cout <<"\n Mau Coba Lagi ? [y/n] : ";
	ulang = getch();
	if(ulang == 'y'){
		cout <<"\n";
		goto show;
	}if(ulang == 'n'){
		cout <<" T E R I M A K A S I H "<< endl;
	} 
	cin.get();
	return 0;
}
