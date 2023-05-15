#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n;
	cout <<" Masukan Panjang Pola : ";
	cin >> n;

	cout <<" Pola Pertama wira \n";
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
		cout <<" ";
		}
		for(int k = n; k >= i; k--){
			cout <<"*";
		}
		cout << endl;
	}
	
	cout << endl;
	cout <<" Pola Kedua wira \n";
	for(int i = 1; i <= n; i++){
		for(int j = n; j >= i; j--){
			cout <<" ";
		}
		for(int k = 1; k <= i; k++){
			cout <<"*";
		}
		cout << endl;
	}
	
	cout << endl;
	cout <<" Pola Ketiga wira \n";
	for(int i = 1; i <= n; i++){
		cout <<" ";
		for(int l = 1; l <= i; l++){
			cout <<"*";
		}
		cout << endl;
	}
	
	cout << endl;
	cout <<" Pola Keempat wira \n";
	for(int i = 1; i <= n; i++){
		cout <<" ";
		for(int m = n; m >= i; m--){
			cout <<"*";
		}
		cout << endl;
	}
	
	cout << endl;
	cout <<" Pola Kelima wira \n";
	for(int i = 1; i <= n; i++){
		cout <<" ";
		for(int f = n; f >= i; f--){
			cout <<" ";
		}
		for (int f2 = 1; f2 <= (2 * i - 1); f2++){
			cout <<"*";
		}
		cout << endl;
	}
	
	cout << endl;
	cout <<" Pola Keenam wira \n";
	for(int i = 1; i <= n; i++){
		cout <<" ";
		for(int j = 1; j <= i; j++){
			cout <<" ";
		}
		for(int k = n; k >= (2 * i - n); k--){
			cout <<"*";
		}
		cout << endl;
	}
	
	cout << endl;
	cout <<" Pola Ketujuh wira \n";
	for(int i = 1; i <= n; i++){
		cout <<" ";
		for(int f = n; f >= i; f--){
			cout <<" ";
		}
		for (int f2 = 1; f2 <= (2 * i - 1); f2++){
			cout <<"*";
		}
		cout << endl;
	}
	
	for(int i = 2; i <= n; i++){
		cout <<" ";
		for(int j = 1; j <= i; j++){
			cout <<" ";
		}
		for(int k = n; k >= (2 * i - n); k--){
			cout <<"*";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}
