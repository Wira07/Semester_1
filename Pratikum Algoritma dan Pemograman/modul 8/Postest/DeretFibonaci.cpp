#include <iostream>
#include <conio.h>
using namespace std;
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
	int n, m;
	m = 0;
	cout <<"\n Masukan Banyak Deret: ";
	cin  >> n;

	cout <<" Deret Fibonacci: \n";
	for(int i = 0; i < n; i++){
		cout <<" "<< fibonacci(m) <<" ";
		m++;
	}
	cout << endl << endl;
	return 0;
}
			
	
