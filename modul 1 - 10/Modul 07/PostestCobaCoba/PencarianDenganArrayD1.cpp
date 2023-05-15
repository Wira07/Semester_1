#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	cout <<"\n   * PROGRAM PENCARIAN BUAH-BUAHAN * \n";
	cout <<"  Menggunakan Variable Array Dimensi 1"<< endl;
	cout <<" |====================================| "<< endl;
	show:
	string buah[14];
	buah[0]="mangga"; buah[1]="apel"; buah[2]="durian"; buah[3]="jeruk"; buah[4]="anggur";
	buah[5]="pisang"; buah[6]="semangka"; buah[7]="pepaya"; buah[8]="nanas"; buah[9]="pir";
	buah[10]="kedongdong"; buah[11]="belimbing"; buah[12]="jambu"; buah[13]="alpuket";
	string dtCari;
	int hasilCari=0, ulang;
	// Data Tidak Di Tampilkan
	/*for(int a = 0; a < 14; a++){
		cout <<" "<< a+1 <<". "<< buah[a] << endl;
	}*/
	cout <<"\n Cari Nama Buah : ";
	cin  >> dtCari;
	for(int b = 0; b < 14; b++){
		if(dtCari == buah[b]){
			hasilCari=1;
			cout <<" Buah ["<< dtCari <<"] Tersedia "<< endl;
			break;
		}
	}
	if(hasilCari == 0){
		cout <<" Buah ["<< dtCari <<"] Belum Tersedia "<< endl;
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
