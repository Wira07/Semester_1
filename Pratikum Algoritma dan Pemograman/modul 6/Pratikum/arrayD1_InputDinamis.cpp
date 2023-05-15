#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	// ARRAY DENGAN 10 ELEMANT BERTYPE INTEGER
	int data[10];
	int n;
	cout <<" | Penerapan array Dimensi 1 Input Dinamis |\n";
	cout <<" |=========================================|\n";
	// ENTRI 10 data
	for (n = 1; n <= 10 ; n++){
		cout <<" Masukan Data "<< n <<" : ";
		cin  >> data [n];
	}
	// TAMPIKAN DATA
	cout <<"\n * Hasil Input *\n"<< endl;
	for (n = 1; n <= 10; n++){
		cout <<" Data ke - "<< n << " : "<< data [n];
		cout << endl;
	}
	cin.get();
	return 0;
}
