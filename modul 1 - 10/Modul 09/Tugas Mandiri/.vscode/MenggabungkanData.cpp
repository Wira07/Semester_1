#include <iostream>
#include <conio.h>
#include <algorithm>
#include <array>

using namespace std;
const size_t arraySize = 6;

void printArray (array <int, arraySize> angka){
	cout <<"\n"<<" Data : ";
	for (int a : angka){
		cout << a <<" ";
	}
}
void printArray2 (array <int, arraySize> angka2){
	cout <<" ";
	for (int a : angka2){
		cout << a <<" ";
	}
	cout << endl;
}
int main(){
    system("cls");
	cout <<"\n| Menggabungkan Data dan Mengurutkan |\n";
	cout <<"+------------------------------------+\n";
	array <int, arraySize> angka = {6, 9, 7, 8, 5, 4};
    array <int, arraySize> angka2 = {13, 15, 11, 12, 14, 10};
	sort(angka.begin(), angka.end());
    sort(angka2.begin(), angka2.end());
	printArray(angka);
    printArray2(angka2);

	cin.get();
	return 0;
}
