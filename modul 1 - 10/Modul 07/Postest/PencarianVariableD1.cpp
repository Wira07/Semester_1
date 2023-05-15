#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	cout <<"\n * PROGRAM PENCARIAN MENGGUNAKAN ARRAY D1 *\n";
	cout <<" |========================================|\n";
	show:
	string food[]={"Seblak","Bakso","Mie Ayam","Batagor"};
	string fashion[]={"Celana","Baju Tidur","Baju","Celana Dalam",
	"Jaket","Daster","Celana Kolor","Celana Pendek","jas","Kaos","Kaos Dalam"};
	string dtCari, dtCari2;
	int length = sizeof(food) / sizeof(*food);
	int length2 = sizeof(fashion) /sizeof(*fashion);
	int pilih, ulang, hasilCari=0, hasilCari2=0;
	cout <<"\n Pilih Kategori:\n";
	cout <<" [1] Makanan\t [2] Pakaian\n";
	cout <<"\n pilih : "; cin >> pilih;
	if(pilih == 1){
		cout <<" [1] Makanan\n Cari Makanan : "; 
		cin.ignore(1, '\n');
		getline(cin, dtCari);
		for(int a = 0; a < length; a++){
			if(dtCari == food[a]){
				hasilCari = 1;
				cout <<" Makanan ["<< dtCari <<"] Tersedia. ";
				break;
			}
		}
		if(hasilCari == 0){
			cout <<" Makanan ["<< dtCari <<"] Belum Tersedia. ";
		}
	}
	if(pilih == 2){
		cout <<" [2] Pakain\n Cari Pakain : "; 
		cin.ignore(1, '\n');
		getline(cin, dtCari2);
		for(int b = 0; b < length2; b++){
			if(dtCari2 == fashion[b]){
				hasilCari2 = 1;
				cout <<" ["<< dtCari2 <<"] Tersedia. ";
				break;
			}
		}
		if(hasilCari2 == 0){
			cout <<" ["<< dtCari2 <<"] Belum Tersedia. ";
		}
	}
	cout <<"|-> Cari Lagi ? [y/n] : ";
	ulang = getch();
	if(ulang == 'y'){
		cout <<"\n";
		goto show;
	}if(ulang == 'n'){
		cout <<"\n T E R I M A K A S I H "<< endl;
	}
	cin.get();
	return 0;
}
