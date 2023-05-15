#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int pilih, nopol2;
	char nopol;
	nopol2:
	cout <<"\n  Masukan Huruf Depan Nomor Polisi\n ";
	cout <<" Pilihan [A/B/D/E/Z] \n ";
	cout <<" Pilih Dengan Huruf Besar : ";
	cin >> nopol;
	switch(nopol){
		case 'A': cout <<"\n NO. Polisi  A adalah Wilayah BANTEN "<<endl;
				break;
		case 'B': cout <<"\n NO. Polisi  B adalah Wilayah BEKASI "<<endl;
				break;
		case 'D': cout <<"\n NO. Polisi  D adalah Wilayah BANDUNG "<<endl;
				break;
		case 'E': cout <<"\n NO. Polisi  E adalah Wilayah CIREBON "<<endl;
				break;
		case 'Z': cout <<"\n NO. Polisi  Z adalah Wilayah SUMMEDANG "<<endl;
				break;
		default: cout <<" Wilayah DKI "<<endl;
	}
	cout<<" Coba Lagi [1]\n ";
	cout<<" Keluar [2]\n ";
	cout<<" Pilih : ";cin>>pilih;
	if (pilih==1) {
		goto nopol2;
	} if (pilih==2) {
		cout <<"\n Terima Kasih Telah Menggunakan Program ini\n ";
	} 
}
