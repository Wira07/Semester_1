#include <iostream>
using namespace std;
main (){
	int i, n, jum;
	cout <<" Masukan Bilangan Bulat (n) : ";
	cin >> n;
	jum = 0;
	for (i = 1; i <= n; i++){
		jum = jum + i;
		cout <<" "<< jum;
	}
	cout <<" ==> Jumlah = "<< jum << endl;	
	return 0;
}
