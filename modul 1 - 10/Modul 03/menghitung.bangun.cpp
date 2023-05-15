#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int pil, pilih, pilihan;
	float tinggi_prisma, lebar_alas, tinggi_alas, luas_permukaan;
	float sisi_kubus, jari_jari, tinggi_tabung, luas, keliling, volume;
//eksppresi dan statement
	cout <<"\n|==============================================|\n";
	cout <<" Menghitung Luas dan Keliling Bangun 3 Dimensi\n";
	cout <<"|==============================================|\n";
	pilihan :
	cout <<" 1. Prisma\n 2. Kubus\n 3. Tabung\n";
	cout <<" Masukan Pilihan : ";cin >> pil;
//pengelompokan
	switch(pil){
	case 1 :
	cout <<" Masukan Nilai Tinggi Prisma\t    :";cin >> tinggi_prisma;
	cout <<" Masukan Nilai Lebar Segitiga Alas  :";cin >> lebar_alas;
	cout <<" Masukan Nilai Tinggi Segitiga Alas :";cin >> tinggi_alas;
	cout <<"|==============================================|\n";
	cout <<" Rumus Volume = (1/2 * t * l)* tp\n";
	cout <<"|==============================================|\n";
//operasi perhitungan
	volume = (0.5 * tinggi_alas * lebar_alas)* tinggi_prisma;
	keliling = (2 * lebar_alas) + (3 * lebar_alas);
	luas = (2 * lebar_alas) + (keliling * tinggi_prisma);
	cout <<" Volume Prisma Adalah\t: "<< volume << endl; 
	cout <<" Keliling Prisma Adalah\t: "<< keliling << endl;
	cout <<" Luas Prisma Adalah\t: "<< luas << endl;
	cout <<"|==============================================|\n";
	break ;
	getch();
//eksppresi
	case 2:
	cout <<" Masukan Nilai Sisi Kubus   :";cin >> sisi_kubus;
	cout <<"|==============================================|\n";
	cout <<" Rumus Volume = (sisi * sisi * sisi)\n";
	cout <<"|==============================================|\n";
//operasi perhitungan
	volume = (sisi_kubus * sisi_kubus * sisi_kubus);
	keliling = (12 * sisi_kubus);
	luas = (6 * sisi_kubus * sisi_kubus);
	cout <<" Volume Kubus Adalah\t: "<< volume << endl; 
	cout <<" Keliling Kubus Adalah\t: "<< keliling << endl;
	cout <<" Luas Kubus Adalah\t: "<< luas << endl;
	break ;
	getch();
//eksppresi
	case 3:
	cout <<" Masukan Nilai Tinggi Tabung     :";cin >> tinggi_tabung;
	cout <<" Masukan Nilai Jari Jari Tabung  :";cin >> jari_jari;
	cout <<"|==============================================|\n";
	cout <<" Rumus Volume = (phi * r * r * t)\n";
	cout <<"|==============================================|\n";
//operasi perhitungan
	volume = (3.14 * jari_jari * jari_jari * tinggi_tabung);
	keliling = (2 * 3.14 * jari_jari);
	luas = (2 * 3.14 * jari_jari * tinggi_tabung);
	cout <<" Volume Tabung Adalah\t: "<< volume << endl; 
	cout <<" Keliling Tabung Adalah\t: "<< keliling << endl;
	cout <<" Luas Tabung Adalah\t: "<< luas << endl;
	break ;

	getch();
	}
	cout <<"|==============================================|\n";
	cout <<" Coba Lagi [1] "<< endl;
	cout <<" Keluar    [2] "<< endl;
	cout <<" Pilih : ";cin >> pilih;
	if (pilih==1){
		goto pilihan;
	}
	if (pilih==2){
          system("cls");
        system("pause");
     }

	cin.get();
	return 0;
}
