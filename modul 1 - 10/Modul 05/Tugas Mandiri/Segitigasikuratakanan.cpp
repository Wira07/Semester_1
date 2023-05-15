#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n;
	cout <<"\n | MEMBUAT SEGITIGA SIKU RATA KANAN |\n";
	cout <<" |==================================|\n";
	ulang:
	cout <<"   Masukan Banyak Baris Pola : ";
	cin >> n;
	cout << endl;
	for (int e = 1; e <= n; e++){
		cout <<"\t ";
		for (int g = n; g >= e; g--){
			cout <<" ";
		} 
		for (int y = 1; y <= e; y++){
			cout <<"@";
		}
		cout << endl;
 	}
}
