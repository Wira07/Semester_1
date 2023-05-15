#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
	int a = 15;
	cout <<"\n Pemanggilan Variable Lokal "<< endl;
	cout <<"\n Nilai Variable dalam Fugnsi Main ():"<< a;
	cout <<" \n NIlai Variable Dalam Fungsi Main(): "<< a;
	cout <<"\n Nilai Ini Terlihat Bahwa Varibale a Tidak Berada Diluar ";
	cout <<"\n Fungsi Lokal "<< endl;;
	cout <<"\n Fungsi Lokal Sendiri Tidak DIkenal Oleh Fungsi Lokal ";
	cout <<"\n Yang DIdeklarasikan Dalam Funsi Main ()";
	cin.get();
	return 0;
};
