#include <iostream>
#include <conio.h>
using namespace std;
main(){
	//VARIABLE
	float bil1, bil2, bil3, bil4, hasil1, hasil2 ;
	int pilih, ulang, ulang2;
	//PROGRAM
	cout <<"\n | MENGUJI HASIL BILANGAN DARI DUA PERKALIAN |\n";
	cout <<" |===========================================|\n";
	ulang:
	cout <<" Perkalian Pertama \n";
	cout <<" Masukan 2 Buah Bilangan : ";
	cin >> bil1; cin >> bil2;
	cout <<" Perkalian Kedua   \n";
	cout <<" Masukan 2 Buah Bilangan : ";
	cin >> bil3; cin >> bil4;
	cout << endl;
	//PROSES
	hasil1 = bil1 * bil2;
	cout <<"\t\t "<< bil1 <<" * "<< bil2 <<" = "<< hasil1;
	hasil2 = bil3 * bil4;
	cout <<"  ||  "<< bil3 <<" * "<< bil4 <<" = "<< hasil2;
	cout << endl;
	//HASIL
	if (hasil1 < hasil2){
		cout <<" |==================================================================|\n";
		cout <<" | Hasil Perkalian Pertama 'Lebih Kecil' Dari Hasil Perkalian Kedua |\n";
		cout <<" |==================================================================|\n";
	}else if (hasil1 > hasil2){
		cout <<" |==================================================================|\n";
		cout <<" | Hasil Perkalian Pertama 'Lebih Besar' Dari Hasil Perkalian Kedua |\n";
		cout <<" |==================================================================|\n";
	}else if ( hasil1 == hasil2){
		cout <<" |=============================================================|\n";
		cout <<" | Hasil Perkalian Pertama 'Sama Dengan' Hasil Perkalian Kedua |\n";
		cout <<" |=============================================================|\n";
	}getch();
	//PEMILIHAN
	ulang2:
	cout <<" Coba Lagi [1] \n";
	cout <<" Keluar [2] \n";
	cout <<" Pilih : "; cin >> pilih;
	if(pilih == 1){
		goto ulang;
	}else if(pilih == 2){
		cout <<" |============================================|\n";
		cout <<" | Terima Kasih telah Menggunakan Program INI |\n";
		cout <<" |============================================|\n";
	}else {
		cout <<" |==================================|\n";
		cout <<" | Pilihan Yang Anda Masukan Salah! |\n";
		cout <<" |==================================|\n";
		goto ulang2;
	}getch();
	return 0;
}
/*
main(){
	int A1, A2, B1, B2, H1, H2;
	cout <<" Menguji Bilangan Hasil Pembagian pertama dan ke dua\n";
	cout <<" Masukan 2 buah bilangan = ";
	cin >> A1; cin >> A2;
	cout <<" Masukan 2 buah bilanga = ";
	cin >> B1; cin >> B2;
	H1=A1/A2;
	H2=B1/B2;
	cout << endl;
	if(H1<H2)
	{
	cout <<" Pembagian pertama lebih kecil dari pembagian ke 2 \n";
	}else if(H1>H2)
	{
	cout <<" pembagian pertama lebih kecil dari pembagiann ke 2\n";
	}else if(H1==H2)
	{
	cout <<" pembagian pertama lebih kecil dari pembagian ke 2"
	}
	return 0;
}


 */
