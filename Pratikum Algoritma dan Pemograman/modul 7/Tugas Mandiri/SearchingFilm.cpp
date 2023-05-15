#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
	cout <<"\n\t * MENCARI DAFTAR JUDUL FILM BOX OFFICE 2019 - 2021 * "<< endl;
	cout <<"\t |===================================================| "<< endl;
	string film[]= {"Avangers","Frozen II","Captian Marvel","The Lion King","Bad Boy For Life","Tenet","Do Litte",
					 "The Invisible Man","Onward","The Call Of The Wild","Godzila Vs Kingkong","Black Widow","Fast & Forious","Venom 2","Maverick",
					 "No Time to Die","Spider-Man 3","The Matrix 4"};
	int show;
	show:
	int length = sizeof(film)/ sizeof(*film);
	string dtCari;
	int hasilCari=0, ulang;
	cout <<"\n Daftar Judul Film "<< endl;
	cout <<" ------------------ "<< endl;
	for(int a = 0; a < length; a++){
		cout <<" "<< (a+1) <<". "<< film[a] << endl;
	}cout <<"\n Cari Judul : ";
	getline(cin, dtCari);
	for(int b = 1; b <= length; b++){
		if(dtCari == film[b]){
			hasilCari = 1;
			cout <<" [Judul Ditemukan]";
			break;
		}
	}
	if(hasilCari == 0){
		cout <<" [Judul Tidak Ditemukan ";
	}
	// Pemilihan Dengan Boolean
	cout <<" -> Coba Lagi ? [y/n] : ";
	ulang = getch();
	if(ulang == 'y'){
		cout<<"\n\n";
		goto show;
	}if(ulang == 'n'){
		cout <<" T E R I M A K A S I H "<< endl;
	}
	cin.get();
	return 0;
}
/*
int hasilCari=0, ulang, n;
	cout <<"\n Inputkan Banyak Judul: "; cin >> n;
	cout <<" --------------------- \n";
	for(int i = 1; i <= n; i++){
		cout <<" Judul Ke "<< i <<": ";
		cin  >> film[i];
	}

	for(int a = 0; a < length; a++){
		cout <<" ["<< (a+1) <<"]"<< film[a] << endl;
	}

	= {"Tom And Jerry","Doraemon","Scooby Doo","Onward","Naruto","The Croods","Masha And The Bear",
					 "Sincan","Minion","Soul","Spongebob","Troll Words Tour","Casper","Wolf Walkers","Shiva",
					 "Krisna","Upin Ipin","Vir"};
	*/
