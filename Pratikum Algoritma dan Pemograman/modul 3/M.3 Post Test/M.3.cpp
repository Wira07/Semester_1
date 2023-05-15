#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
	cout<<"========================================"<<endl;
	cout<<" selamat datang di algoritma versi wira "<<endl;		
	cout<<"========================================"<<endl;
	
	int tkj, rpl, penjumlahan, pengurangan, pembagian, bagi_hasil;
	cout<<" masukan jumlah orang di tkj : ";
	cin>>tkj;
	cout<<" masukan jumlah orang di rpl : ";
	cin>>rpl;
	
	penjumlahan = tkj + rpl;
	pengurangan = tkj - rpl;
	pembagian = tkj / rpl;
	bagi_hasil = tkj % rpl;
	
	cout<<"======================================"<<endl;
	cout<<" mari kita mulai proses menghitungnya "<<endl;		
	cout<<"======================================"<<endl;
	
	cout<<tkj<<" + "<<rpl<<" : "<<penjumlahan<<endl;
	cout<<tkj<<" - "<<rpl<<" : "<<pengurangan<<endl;
	cout<<tkj<<" / "<<rpl<<" : "<<pembagian<<endl;
	cout<<tkj<<" % "<<rpl<<" : "<<bagi_hasil<<endl;
	
	
}
