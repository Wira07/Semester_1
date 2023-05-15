#include <iostream>
#include <conio.h>
using namespace std;
 // Deklarasi Funngsi
int fibonacci (int m){
	if(m == 0 || m == 1){
		return m;
	}else{ 
		return fibonacci (m-1) +  fibonacci (m-2);
	}
}
int main(){
	cout <<"\n * MENGHITUNG DERET FIBONACCI * \n";
	cout <<" |============================| \n";
	show:
	int n, m, ulang;
	m = 0;
	cout <<"\n Masukan Banyak Deret: ";
	cin  >> n;

	cout <<" Deret Fibonacci: \n";
	for(int i = 0; i < n; i++){
		cout <<" "<< fibonacci(m) <<" ";
		m++;
	}
	cout << endl << endl;
	cout <<" Mau Coba Lagi ? [y/n] : ";
  	ulang = getch();
  	if(ulang == 'y'){
    cout << endl;
    goto show;
  	}
  	if(ulang == 'n'){
    cout <<" T E R I M A K A S I H "<< endl;
  	}
	cin.get();
	return 0;
}
			
	
