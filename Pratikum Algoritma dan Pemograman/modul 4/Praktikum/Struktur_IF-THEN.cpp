#include <iostream>
#include <conio.h>
using namespace  std;
int main() {
	int n1, n2, n3, pilih, blt;
	float n4;
	blt:
	cout <<"\n Program Menentukan Kelayakan Penerima BLT "<<endl;
	cout <<"#==========================================#\n";
	cout <<" Masukan Nilai Ekonommi [1..5]    = ";
	cin >> n1;
	cout <<" Masukan Nilai Resiko   [1..5]    = ";
	cin >> n2;
	cout <<" Massukan Nilai Tanggungan [1..5] = ";
	cin >> n3;
	//proses
	n4 = (n1 + n2 + n3) /3;
	if (n4 > 2.75){
		cout <<"[=============================================]\n";
		cout <<" Nilai Rata Rata = "<< n4 <<" Hasil dinyatakan LAYAK \n";
		cout <<"[=============================================]\n";	
	}else if (n4 < 2.75) {
	cout <<" Niali Rata Rata = "<< n4 <<" Hasil dinyatakan TIDAK LAYAK\n";
	cout <<"[=============================================]\n";
	}	
	//cout <<" Coba Lagi : \n";
	cout <<" Coba Lagi [1] "<<endl;
	cout <<" Keluar [2] "<<endl;
	cout <<" Pilih : ";
	cin >> pilih ;
	if (pilih == 1) {
		goto blt;
	} if (pilih == 2) {
	cout <<"\n Terima Kasih Telah Menggunakan Program ini \n";
	cout <<"------------------------------------------\n ";
	} getch();
	return 0;
}
