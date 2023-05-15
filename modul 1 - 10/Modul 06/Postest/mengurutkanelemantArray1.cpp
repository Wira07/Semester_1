#include <iostream>
#include <conio.h>
#include <algorithm>
#include <array>

using namespace std;
const size_t arraySize = 6;

void printArray (array <int, arraySize> angka){
	cout <<"\n"<<" Elemen Array : ";
	for (int a : angka){
		cout << a <<" ";
	}
	cout << endl;
}
int main(){
	cout <<"\n | Program Mengurutkan Elemen Array |\n";
	cout <<" |==================================|\n";
	array <int, arraySize> angka = {10, 30, 20, 15, 21, 31};
	printArray(angka);

	sort(angka.begin(), angka.end());
	printArray(angka);

	cin.get();
	return 0;
}
