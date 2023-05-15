#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int i, n, ulang, ulang2, pilih;
	ulang:
	cout <<"\n Masukan Bilangan Bulat : ";
	cin >> n;
	i = n;
	while (i > 0){
		cout <<" TI Unnggul -> FKOM Juara -> UNIKU Jaya "<< endl;
		i--;
	}getch();
	ulang2:
	cout <<" Coba Lagi [1] \n";
	cout <<" Keluar [2] \n";
	cout <<" Pilih : "; cin >> pilih;
	if (pilih ==1){
		goto ulang;
	}else if (pilih == 2){
		cout <<" |============================================|\n";
		cout <<" | Terima Kasih Telah Menggunakan Program INI |\n";
		cout <<" |============================================|\n";
	}else {
		cout <<" |==================================|\n";
		cout <<" | PIlihan YAng Anda Masukan Salah! |\n";
		cout <<" |==================================|\n";
		goto ulang2;
	}getch();
return 0;
}
