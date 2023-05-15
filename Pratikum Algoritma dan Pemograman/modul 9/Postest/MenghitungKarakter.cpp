#include <iostream>
#include <conio.h>
using namespace std;
void karakter();
int main(){
	string a;
	cout<<"Menghitung Jumlah Karakter"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"Masukan Kalimat : ";
	karakter();
	getch();
	return 0;
}
void karakter(){
	int jumlah;
	string a;
	getline(cin, a);
	jumlah = a.length();
	cout<<"Jumlah Karakter adalah"<<" = "<<jumlah<<endl;
	cout<<"Karakter yang diinputkan "<<a<<endl;
}
