#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n;
	cout <<" Masukan Baris Pola Ketupat: ";
	cin >> n;
	for (int i = 0; i <= n; i++){
		for (int j = n; j >= i; j--){
			cout <<" ";
		}
		for (int k = 1; k <= (2 * i - 1); k++){
		//	cout <<"!";
			if (k == 1 || k == 2 * i - 1){
				cout <<"*";
			}else {
				cout <<" ";
			}
		}
	cout << endl;
	}
	for (int i = 0; i <= n; i++){
		for (int a = 1; a <= i; a++){
			cout <<" ";
		}
		for (int b = n; b >= (2 * i - n); b--){
		//	cout <<"!";
			if (i == n || b == n || b == 2 * i -n){
				cout <<"!";
			}else {
				cout <<" ";
			}
		}
		cout << endl;
	}
	getch();
	return 0;
}



/*#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n;
	cout <<" Masukan Baris Pola : ";
	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int a = n; a >= i; a--){
			cout <<" ";
		}
		for(int b = 1; b <= (2 * i - 1); b++){
			cout <<"^";
		}
		cout << endl;
	}
	for(int i = 2; i <= n; i++){
		for(int a = 1; a <= i; a++){
			cout <<" ";
		}
		for(int b = n; b >= (2 * i - n); b--){
			cout <<"^";
		}
		cout << endl;
	}

	return 0;
}
*/