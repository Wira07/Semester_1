#include <iostream>
#include <conio.h>
using namespace std;
main (){
	int i, n, jum, ulang, ulang2, pilih;
	ulang:
	cout <<" Masukan Bilangan Bulat : ";
	cin >> n;
	jum = 0;
	for (i = 1; i <= n; i++){
		jum = jum + i;
		cout <<" "<< jum;
	}
	cout <<" ==> Jumlah = "<< jum << endl;
	ulang2:
	cout<<" coba lagi [1] \n ";
	cout<<" keluar [2] \n ";
	cout<<" pilih ";cin>>pilih;
	if (pilih == 1){
		goto ulang;
	}else if(pilih == 2){
		cout<<" selamat anda telah berhasil ";
	}else{
		cout<<" selamat kamu berjaya ";
		goto ulang2;
	}	
	return 0;
}
