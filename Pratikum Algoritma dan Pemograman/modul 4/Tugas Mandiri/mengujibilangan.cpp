#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
	float a,b,c,d,hasil1,hasil2;
	cout<<"\n=========================\n";
	cout<<" Penghitungan Pecahan 1\n";
	cout<<" Masukkan pecahan a : ";
	cin>>a;
	cout<<" Masukkan pecahan b : ";
	cin>>b;
	hasil1 = a + b;
	cout<<" hasil dari penjumlahan "<<a<<" + "<<b<<" adalah "<<hasil1<<endl;
	
	cout<<"\n========================\n";
	cout<<"Penghitungan Pecahan 2\n";
	cout<<" Masukkan pecahan c : ";
	cin>>c;
	cout<<" Masukkan pecahan d : ";
	cin>>d;
	hasil2 = c + d;
	cout<<" hasil dari penjumlahan "<<c<<" + "<<d<<" adalah "<<hasil2<<endl;
	
	if(hasil1 < hasil2){
		cout<<" Pecahan "<<hasil1<<" Lebih kecil dari "<<hasil2;
	}else if(hasil1 > hasil2){
		cout<<" Pecahan "<<hasil1<<" Lebih Besar dari "<<hasil2;
	}else{
		cout<<" Pecahan "<<hasil1<< " Sama dengan pecahan "<<hasil2;
	}
}
/*
main(){
	int A1, A2, B1, B2, H1, H2;
	cout <<" Menguji Bilangan Hasil Pembagian pertama dan ke dua\n";
	cout <<" Masukan 2 buah bilangan = ";
	cin >> A1; cin >> A2;
	cout <<" Masukan 2 buah bilanga = ";
	cin >> B1; cin >> B2;
	H1=A1/A2;
	H2=B1/B2;
	cout << endl;
	if(H1<H2)
	{
	cout <<" Pembagian pertama lebih kecil dari pembagian ke 2 \n";
	}else if(H1>H2)
	{
	cout <<" pembagian pertama lebih kecil dari pembagiann ke 2\n";
	}else if(H1==H2)
	{
	cout <<" pembagian pertama lebih kecil dari pembagian ke 2"
	}
	return 0;
}


 */
