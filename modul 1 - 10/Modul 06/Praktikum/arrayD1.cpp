#include <iostream>
#include <conio.h>
using namespace std;
main(){
	string gn[7];
	// MENGISIKAN NAMA " 7 SUMIT INDONESI"
	cout << endl;
	cout <<" | Penerapan Array Dimensi 1 |\n";
	cout <<" |===========================|\n";
	gn[0] = " Gn Kelinci ";
	gn[1] = " Gn Semeru ";
	gn[2] = " Gn Rinjani ";
	gn[3] = " Gn Bukit ";
	// MENAMPILKAN ISI ARRAY 
	for (int i = 0; i < 7; i++){
		cout << gn[i] << endl;
	}
	cin.get();
	return 0;
}
