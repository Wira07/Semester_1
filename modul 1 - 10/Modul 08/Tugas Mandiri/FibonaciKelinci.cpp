#include <iostream>
#include <conio.h>
using namespace std;
// long fibo(long n);
int fibo (int m);
void nama(){
    cout <<"\n +-----------------+\n";
    cout <<" | Program Selesai |\n";
    cout <<" +-----------------+------+\n";
    cout <<" | Nama  : EGY FIRMANSYAH |\n";
    cout <<" | Kelas : TI-NFC 2020 03 |\n";
    cout <<" +------------------------+\n";
}
main(){
    cout <<"\n | PROGRAM FIBONACI SEPASANG KELINCI |\n";
    cout <<" +-----------------------------------+\n";
    show:
    int x;
    cout <<"\n Masukan Akhir bulan   : ";
    cin  >> x;
    cout <<" Jumlah Kelinci adalah : \n"; 
    cout << fibo(x) <<" pasang "<< endl;
    int ulang;
    cout <<"\n Mau Coba Lagi ? [y/n] : ";
    ulang = getch();
    if (ulang == 'y'){
        cout <<"\n";
        goto show;
    }if (ulang == 'n'){
        nama();
    }
cin.get();
return 0;
}
int fibo (int m){
	if(m == 0 || m == 1){
        cout << " *\n";
		return m;
	}else{ 
		return fibo (m-1) +  fibo (m-2);
	}
}
/*
long fibo(long n) {
 if (n==0) return 1;
 if (n==1) return 1;
 return fibo(n-1)+fibo(n-2);
}
*/