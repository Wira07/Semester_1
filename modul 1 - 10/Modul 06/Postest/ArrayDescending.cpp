#include <iostream>
using namespace std;
#define MAX 100
int main(){
	int arr[MAX];
	int n, temp;
	cout <<"\n | Mengurutkan Nilai Elemen Array (Descending) |\n";
	cout <<" |============================================|\n";
	cout <<"\n  Masukan Jumlah Array: ";
	cin  >> n;
	
	if (n < 0 || n > MAX){
		cout<<" Input <= 100 "<< endl;
		return -1;
	}
	for (int i = 1; i <= n; i++){
		cout <<"  Nilai Eleman Ke ["<< i <<"] : ";
		cin  >> arr[i];
	}
	cout  <<"\n  Nilai Elemen : "<< endl;
	cout <<"|==================================================|\n";
	for (int i = 1; i <= n; i++){
		cout <<"  "<< arr[i] <<"\t";
	}
	cout << endl;
	cout <<"|==================================================|\n";

	for (int i = 1; i <= n; i++){		
		for (int j = i+1; j < n; j++){
			if (arr[i] < arr[j])	{
				temp   = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout <<"\n  Hasil Pengurutan Descending : "<< endl;
	cout <<"|==================================================|\n";
	for(int i = 1; i < n; i++){
		cout <<"  ";
		cout << arr[i]<<"\t";
	}	
	cout << endl;	
	cout <<"|==================================================|\n";
	
	cin.get();
	return 0;
}