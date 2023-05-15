#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n1, n2, n3;
	float n4;
	cout <<"\n Program Menentukan Kelayakan Penerimaan BLT "<<endl;
	cout <<" Masukan Nilai Ekonpmmi [1..5] = "; cin >> n1;
	cout <<" Masukan Nilai Resiko   [1..5] = "; cin >> n2;
	cout <<" Masukan Nilai Tanggungan [1..5] = "; cin >> n3;
	//proses
	n4 = (n1 + n2 + n3) /3;
	if (n4 > 2.75){
		cout <<" Niali Rata Rata = "<< n4 <<", Hasil Dinyatakan LAYAK \n";
	}else {
		cout <<" Nilai Rata Rata = "<< n4 <<", Hasil Dinyatakan Tidak LAYAK \n"; 
		}
	return 0;
}
