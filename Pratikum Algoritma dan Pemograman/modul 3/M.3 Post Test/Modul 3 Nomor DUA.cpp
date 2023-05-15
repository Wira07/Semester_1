#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int nilai = 4;
	int n;
	int total;
	
	cout<<"=========================================="<<endl;
	cout<<" selamat datang di web wira sukma saputra "<<endl;
	cout<<"=========================================="<<endl;
	
	cout<<" Menghitung hasil 4 pangkat n "<<endl<<endl;
	cout<<" Masukan nilai Bilangan n = ";
	cin>> n;
	total = pow(4, n);
	
	cout<<endl<<" Hasil dari " <<nilai<< " pangkat " << n << " adalah " <<total<<endl;
	getch();
	
	cout<<"====================================================="<<endl;
	cout<<" terima kasih telah mampir ke web wira sukma saputra "<<endl;
	cout<<"====================================================="<<endl;

}
