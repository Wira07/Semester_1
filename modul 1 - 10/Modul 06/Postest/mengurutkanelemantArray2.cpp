#include <iostream>
#include <conio.h>
#include <array>
#include <algorithm>
using namespace std;
// FUNGSI UNTUK MENCETAK ARRAY
const size_t arraySize = 6;
void printArray(array <int, arraySize> angka){
	cout <<" \nElemen Array : ";
	for (int a : angka){
		cout << a <<" ";
	}
	cout << endl;
}
int main(){
	array <int, arraySize> angka = {10, 30, 20, 15, 21, 31};
	printArray(angka);
	
	sort(angka.begin(), angka.end(), greater());
	printArray(angka);

	cin.get();
	return 0;
}
