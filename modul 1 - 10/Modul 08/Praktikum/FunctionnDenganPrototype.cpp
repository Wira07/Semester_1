#include <iostream>
#include <conio.h>
using namespace std;
void garis(); // Prototype Function
int main () // Main Function
{
	cout << endl;
	garis(); // Panggil Function
	cout <<" NIP NAMA PNS "<< endl;
	garis(); // PAnggil Function
	cout <<" 198108272011012003 SRI GUSTRIANI "<< endl;
	cout <<" 198209112022011001 RIO PRIANTAMA "<< endl;
	garis(); // Panggil Function
	cout << endl;
}
void garis() // Detal Function
{
	int i;
	for(i = 0; i <= 10; i++){
		cout <<" - ";
	}
	cout << endl;
}
