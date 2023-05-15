#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int matrik [3][3];
	int baris, kolom;
	ulang:
	cout <<" * Masukan Data * \n";
	for (baris = 0; baris < 3; baris++){
		for (kolom = 0; kolom < 3; kolom++){
			cout <<" Masukan Angka : ";
			cin  >> matrik [baris] [kolom];
		}
	}
	cout <<"\n Hasilnya Adalah : \n";
	for (baris = 0; baris < 3; baris++){
		cout <<" ";
		for (kolom = 0; kolom < 3; kolom++){
			cout << matrik [baris] [kolom];
			cout <<" ";
		}
		cout << endl;
	}
	getch();
}
/*
#include <stdio.h>
#include <conio.h>

int main(){
	int matrik [3][3];
	int baris, kolom;
	printf(" * Masukan Data * \n");
	for (baris = 0; baris < 3; baris++){
		for (kolom = 0; kolom < 3; kolom++){
			printf(" Masukan Angka : ");
			scanf(" %d ",&matrik [baris] [kolom]);
		}
	}
		printf("\n Hasilnya Adalah : \n");
		for (baris = 0; baris < 3; baris++){
		for (kolom = 0; kolom < 3; kolom++){
			printf(" %d ",&matrik [baris] [kolom]);
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
*/
