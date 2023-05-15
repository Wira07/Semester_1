#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int nilai;
	char skor, ulang, show;
	// TI 2020 C
	cout <<"\n * MENENTUKAN GRADE NILAI * "<< endl;
	cout <<" |------------------------| "<< endl;
	show:
	cout <<"\n Masukan Nilai : ";
	cin  >> nilai;
	
	if(nilai >= 90)
		skor = 'A';
	else
	if(nilai >= 70)
		skor = 'B';
	else
	if(nilai >= 60)
		skor = 'C';
	else
	if(nilai >= 50)
		skor = 'D';
	else
	skor = 'E';

	cout <<" Skor : "<< skor << endl;	
	cout <<" Mau Coba Lagi ? [y/n]: ";
	ulang = getch();
	if(ulang == 'y' || ulang == 'y'){
		cout << endl;
		goto show;
	}
	if(ulang == 'n' || ulang == 'n'){
		cout <<" T E R I M A K A S I H "<< endl;
	}
	cin.get();
	return 0;
}
