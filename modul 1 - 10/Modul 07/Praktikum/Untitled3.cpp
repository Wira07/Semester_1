#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i;
	int elemen;
	int cari, ketemu=0;
	int data[100];
	
	cout<<"Masukan Banyak Data : ";
	cin>>elemen;
	cout<<endl;
	
	for (i=1;i<=elemen;i++){
		cout<<" masukan data ke-"<<i<<" : ";
		cin>>data[i];
	}
	cout<<endl;
	cout<<"input bilangan yang dicari : ";
	cin>>cari;
	cout<<"-----------------------------"<<endl;
	cout<<endl;
	for(i=0; i <= elemen; i++){
		if (data[i]==cari){
			ketemu=1;
			cout<<"Data Ditemukan Pada indeks ke-"<<i;
		}
	}
	if (ketemu==0){
		cout<<"Data tidak ditemukan";
	}
	getch();
}
