#include <iostream>
#include <conio.h>
using namespace std;
main(){
	//VARIABEL
	int J1, M1, D1, J2, M2, D2, Total, Bayar;
	int W_awal, W_akhir, pilih, TL, CB;
	//PROGRAM
	TL:
   cout <<"yohan"<< endl;
	cout <<"\n |-TARIF TELPON-| "<< endl;
	cout <<" ================"<< endl;
	cout <<" #Masukan Waktu Awal\n [Jam  Menit  Detik] : ";
	cin >> J1 >> M1 >> D1;
	cout <<" #Masukan Waktu Akhir\n [Jam  Menit  Detik] : ";
	cin >> J2 >> M2 >> D2;
	//PROSES
	W_awal = (J1 * 60) + M1 + (D1 / 60);
	W_akhir = (J2 * 60) + M2 + (D2 / 60);
	Total = W_akhir - W_awal;
	//HASIL
	if((J1 >= 6) && (J1 < 7)){
		Bayar = Total * 50;
	}else if((J1 >= 7) && (J1 < 12)){
		Bayar = Total * 75;
	}else if((J1 >= 12) && (J1 < 13)){
		Bayar = Total * 40;
	}else if((J1 >=13) && (J1 < 18)){
		Bayar = Total * 75;
	}else if((J1 >=18) && (J1 < 21)){
		Bayar = Total * 50;
	}else if((J1 >= 21) && (J1 < 24)){
		Bayar = Total * 25;
	}else if((J1 >= 24) && (J1 < 6)){
		Bayar = Total * 10;
	}
	cout <<" ||=============================||\n";
	cout <<" ||Tarif Telpon Anda Rp. "<< Bayar << endl;
	cout <<" ||=============================||\n";
	getch();
	//PEMILIHAN
	CB:
	cout <<" Coba Lagi [1] \n";
	cout <<" Keluar [2] \n";
	cout <<" Pilih : "; cin >> pilih;
	if(pilih == 1){
		goto TL;
	}else if(pilih == 2){
		cout <<" ||============================================||\n";
		cout <<" || Terima Kasih Telah Menggunakan Program Ini ||\n";
		cout <<" ||============================================||\n";
	}else {
		cout <<" ||=================================||\n";
		cout <<" || Pilihan Yang Anda Masukan Salah ||\n";
		cout <<" ||=================================||\n";
		goto CB;
	}getch();
	return 0;
}
