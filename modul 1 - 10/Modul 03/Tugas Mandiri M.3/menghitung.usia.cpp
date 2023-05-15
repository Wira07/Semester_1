#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
main(){
      int umur, thn, pilih;
      char nama [30];
      cout <<"\n Masukan Nama Anda \t  : ";
      gets(nama);
      cout <<" Masukan Tahun Lahir Anda : ";
      cin >> thn;
      umur=2020-thn;
      cout <<"#===============================================#\n";
      cout <<" Umur "<< nama <<" saat ini adalah, "<< umur <<" Tahun.\n";
      cout <<"#===============================================#\n";
      getch();
      return 0;
}
