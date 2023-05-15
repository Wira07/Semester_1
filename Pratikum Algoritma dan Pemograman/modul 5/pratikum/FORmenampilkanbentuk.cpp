#include <iostream>
#include <iomanip>
using namespace std;
main (){
	int i, n;
	cout <<" Masukan Bilangan Bulat (n) : ";
	cin >> n;
	for (i = 1; i <= n; i++)
		cout << setw (i) << "@" << endl;
	return 0;
}
