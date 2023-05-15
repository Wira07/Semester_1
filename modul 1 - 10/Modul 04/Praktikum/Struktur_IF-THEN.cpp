#include <iostream>
#include <conio.h>
using namespace  std;
int main() {
	int n1, n2, n3, pilih, blt;
	float n4;
	cout <<"\n Program Menentukan Kelayakan Penerima BLT "<<endl;
	cout <<" Masukan Nilai Ekonommi [1..5]    = ";
	cin >> n1;
	cout <<" Masukan Nilai Resiko   [1..5]    = ";
	cin >> n2;
	cout <<" Massukan Nilai Tanggungan [1..5] = ";
	cin >> n3;
	//proses
	n4 = (n1 + n2 + n3) /3;
	if (n4 > 2.75){
		cout <<" Nilai Rata Rata = "<< n4 <<" Hasil dinyatakan LAYAK \n";
		return 0;
	}
	cout <<" Nilai Rata Rata = "<< n4 <<" Hasil dinyatakan TIDAK LAYAK\n";
	return 0;
}
