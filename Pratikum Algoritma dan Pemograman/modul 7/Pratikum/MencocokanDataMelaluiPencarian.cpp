#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main(){
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
	return 0;
}
