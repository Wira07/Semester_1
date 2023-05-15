#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n1, n2, n3, pilih, blt2;
	int n4;
	blt2:
	cout <<"\n Program Menentukan Kelayakan Penerimaan BLT "<<endl;
	cout <<" ============================================ \n";
	cout <<" Masukan Nilai Ekonpmmi [1..5] = "; cin >> n1;
	cout <<" Masukan Nilai Resiko   [1..5] = "; cin >> n2;
	cout <<" Masukan Nilai Tanggungan [1..5] = "; cin >> n3;
	//proses
	n4 = (n1 + n2 + n3) /3;
	if (n4 > 2.75){
		cout <<" --------------------------------------------------\n";
		cout <<" Niali Rata Rata = "<< n4 <<", Hasil Dinyatakan LAYAK \n";
		cout <<" --------------------------------------------------\n";
	}else {
		cout <<" -----------------------------------------------------\n";
		cout <<" Nilai Rata Rata = "<< n4 <<", Hasil Dinyatakan Tidak LAYAK \n"; 
		cout <<" -----------------------------------------------------\n";
		}getch();
	//ulangan
	cout <<" Coba Lagi [1]\n ";
	cout <<" keluar [2]\n ";
	cout <<" Pilih : "; cin >> pilih;
	if (pilih==1) {
	goto blt2;
	} if (pilih==2) {
		cout <<" |============================================|\n";
		cout <<" | Terima Kasih Telah Menggunakan Program ini |\n";
		cout <<" |============================================|\n";
	} getch();
	return 0;
}
