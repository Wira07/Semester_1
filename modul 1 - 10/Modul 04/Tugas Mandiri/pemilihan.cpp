#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
main(){
    //VARIABEL
    float pulsa, igp;
    int pilih, pilih2;
    string no_hp, nama;
    //PROGRAM
    igp:
    cout <<"\n  ISI PULSA GRATIS "<<endl;
    cout <<" [================]"<<endl;
    cout <<" Masukan Nomer Hp : "; cin >> no_hp;
    cout <<" Jumlah Pulsa     : "; cin >> pulsa;
    cin.ignore(1, '\n');
    cout <<" Masukan Nama     : ";
    getline(cin, nama);
    //HASIL
    cout <<" ||===========================||\n ";
    cout <<" || Selamat Pulsa Telah Masuk ||\n ";
    cout <<" ||===========================||\n ";
    getch();
    //PEMILIHAN
    pilih2:
    cout <<" Coba Lagi [1]\n ";
    cout <<" Keluar [2]\n ";
    cout <<" Pilih : "; cin >> pilih;
    if(pilih == 1){
        goto igp;
    }else if(pilih == 2){
        cout <<"  ||============================||\n";
        cout <<"  || Selamat Anda Kena Frank :v ||\n";
        cout <<"  ||============================||\n";
    }else {
        cout <<"  ||=================================||\n";
        cout <<"  || Pilihan Yang Anda Masukan Salah ||\n";
        cout <<"  ||=================================||\n";
        goto pilih2;
    }getch();
    return 0;
    }
