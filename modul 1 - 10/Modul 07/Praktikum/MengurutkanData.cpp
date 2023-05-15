#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[]){
	int data[] = {52, 19, 62, 87, 30, 32, 49, 80, 41, 29};
	int jumData = sizeof(data) / sizeof(int);

	// Menampilkan data
	cout <<"\n\t * MENGURUTKAN DATA * "<< endl;
	cout <<"\t |==================| "<< endl;
	cout <<"\n Data Sebelum Diurutkan : "<< endl;
	for (int i = 0; i < jumData; i++)
		cout <<" "<< data[i] <<" ";
	cout << endl; // Pindah Garis

	// Lakukan Pengurutan Data Ascending
	for (int i = 0; i < jumData - 1; i++)
		for (int j = i; j < jumData; j++)
	if (data[i] > data[j]){
		// Tukarkan 
		int tmp = data[i];
		data[i] = data[j];
		data[j] = tmp;
	}
	// Tampilkan Data
	cout <<"\n Diurutkan Secara Ascending : "<< endl;
	for (int i = 0; i < jumData; i++)
		cout <<" "<< data[i] <<" ";
	cout << endl; // Pindah Baris
		cin.get();
	return 0;
}

/*
	// Lakukan Pengurutan Data Descending
	for (int i = 0; i < jumData - 1; i++)
		for (int j = i; j < jumData; j++)
	if (data[i] < data[j]){
		// Tukarkan 
		int tmp = data[i];
		data[i] = data[j];
		data[j] = tmp;
	}
	// Tampilkan Data
	cout <<"\n Diurutkan Secara Descending : "<< endl;
	for (int i = 0; i < jumData; i++)
		cout <<" "<< data[i] <<" ";
	cout << endl; // Pindah Baris
	cin.get();
	return 0;
}
*/