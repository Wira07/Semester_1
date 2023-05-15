#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	cout <<"\n\t * Searching dalam kehidupan sehari-hari * "<<endl;
	string makanan[] = {"ayam bakar", "Nasi Goreng", "Hucap", "Karedok"};
	int length = sizeof(makanan)/sizeof(*makanan);
	string DataCari;
	int hasilCari, ulang;
	show:
	cout<<"Data tersedia dalam sebuah makanan : "<<endl;
	for(int a = 0; a < length; a++){
		cout<<"index ke-"<<a<<" : "<<makanan[a]<<endl;
	}
	cout<<"Data yang dicari : ";
	cin>>DataCari;
	for(int b = 0; b < length; b++){
		if(DataCari == makanan[b]){
			hasilCari++;
		}
	}
	if(hasilCari == 0){
		cout<<"Data tidak ditemukan"<<endl;
	}else {
		cout<<"Data "<<DataCari<<" ditemukan di : "<<endl;
		for( int c = 0; c < length; c++){
			if(DataCari == makanan[c]){
				cout<<"Index ke-"<<c<<endl;
			}
		}
	}
	cout <<"\n Mau Coba Lagi ? [y/n] : \n ";
	ulang = getch();
	if(ulang == 'y'){
		cout <<"\n";
		goto show;
	}if(ulang == 'n'){
		cout <<" T E R I M A K A S I H "<< endl;
	} 
}
