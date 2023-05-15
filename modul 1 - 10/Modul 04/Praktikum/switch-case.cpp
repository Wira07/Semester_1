#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	char nopol;
	nopol2:
	cout <<"\n  Masukan Huruf Depan Nomor Polisi\n ";
	cout <<" Pilihan [A/B/D/E/Z] : ";
	cin >> nopol;
	switch(nopol){
		case 'A': cout <<"\n NO. Polisi  A adalah Wilayah BANTEN "<<endl;
		case 'D': cout <<"\n NO. Polisi  D adalah Wilayah BANDUNG "<<endl;
		case 'E': cout <<"\n NO. Polisi  E adalah Wilayah CIREBON "<<endl;
		case 'Z': cout <<"\n NO. Polisi  Z adalah Wilayah SUMMEDANG "<<endl;
		default: cout <<" Wilayah DKI "<<endl;
	}
	return 0;
}
