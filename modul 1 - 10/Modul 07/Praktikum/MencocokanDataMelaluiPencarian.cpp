#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[]){
	string string1, string2;
	int ulang, show;
	cout <<"\n * MENCOCOKAN DATA MELALUI PENCARIAN * "<< endl;
	cout <<" |===================================| "<< endl;
	show:
	cout <<"\n String Pertama : ";
	getline(cin, string1);

	cout <<" String Kedua   : ";
	getline(cin, string2);

	if(string1 == string2)
		cout <<" Kedua String Sama "<< endl;
	else 
		if(string1 > string2)
			cout <<" "<< string1 <<" > "<< string2 << endl;
		else
			cout <<" "<< string1 <<" < "<< string2 << endl;
		cin.get();
		cout <<" Mau Coba Lagi ? [y/n]: ";
		ulang = getch();
		if (ulang == 'y'){
			goto show;
		}if(ulang == 'n'){
			cout <<" T E R I M A K A S I H "<< endl;
		}
	return 0;
}
