#include <iostream>
using namespace std;

int main(){
	string grammyAwards[] = {"Jojorabbit","Thelrisman","Litte woman","Joker","Parasite"};
	int length =sizeof(grammyAwards)/sizeof(*grammyAwards);
	string dtCari;
	int hasilCari;
	
	cout<<" LIST NOMINASI FILM BOX OFFICE "<<endl;
	cout<<"-------------------------------"<<endl;
	for ( int i = 0; i < length; i++){
		cout<<" Nominasi "<<i+1<<" : "<<grammyAwards[i]<<endl;
	}
	cout<<endl;
	cout<<" Daftar Pencarian : ";
	cin>>dtCari;
	for ( int j = 0; j < length; j++){
		if ( dtCari == grammyAwards[j]){
			hasilCari++;
		}
	}
	if (hasilCari == 0){
		cout<<"\nJudul film tidak ditemukan "<<endl;
	}
	else {
		cout<<"\nfilm "<<dtCari<<" Berada DI ";
		for ( int k = 0; k < length; k++){
			if ( dtCari == grammyAwards[k]){
				cout<<" Nominasi ke "<<k+1<<endl;
			}
		}
	}
	return 0;
}
