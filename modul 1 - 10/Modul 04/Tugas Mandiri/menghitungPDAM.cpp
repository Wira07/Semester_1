#include <iostream>
#include <conio.h>
using namespace std;
main(){
	//VARIABEL
	int bayar, pilih, ulang, ulang2;
	float Air;
	//PROGRAM
	ulang:
	cout <<"\n Menghitung Pemakaian PDAM "<< endl;
	cout <<" ============================ \n";
	cout <<" Masukan Nilai Pemakain Air\n per-M3 :";
	cin >> Air;
	//PROSES
	if (Air <= 10){
		bayar = Air * 5000;
	}else if ((Air >= 10) && (Air < 20)){
		bayar = Air * 75000;
	}else if (Air == 20){
		bayar = Air * 10000;
	}else {
		bayar = Air * 15000;
	} cout <<" Tarif Yang Harus Dibayar Rp. "<< bayar;
	getch();
	//PEMILIHAN
	cout << endl << endl;
	ulang2:
	cout <<" Coba Lagi [1]\n";
	cout <<" Keluar [2]\n";
	cout <<" Pilih : "; cin >> pilih;
	if (pilih == 1){
		goto ulang;
	}else if (pilih == 2){
		cout <<" |============================================|\n";
		cout <<" | Terima Kasih Telah Menggunakan Program INI |\n";
		cout <<" |============================================|\n";
	}else {
		cout <<" |==================================|\n";
		cout <<" | Pilihan Yang Anda Masukan Salah! |\n";
		cout <<" |==================================|\n";
		goto ulang2;
	}getch();
return 0;
}
