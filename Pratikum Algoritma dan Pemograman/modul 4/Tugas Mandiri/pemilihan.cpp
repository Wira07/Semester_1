#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
main(){
    //VARIABEL
    float ransomeware, Virus;
    int pilih, pilih2;
    string nama;
    //PROGRAM
    wira:
    cout<<" [============================]";	
    cout<<"\n persiapan penyerangan virus "<<endl;
    cout<<" [============================]"<<endl;
    cout<<" Masukan Jumlah Virus : ";cin>>Virus;
    cout<<" masukan nomor tujuan   : ";cin>>ransomeware;
    cin.ignore(1, '\n');
    cout <<" Masukan Nama : ";
    getline(cin, nama);
    //HASIL
    cout<<endl;
    cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout<<" || selamat anda berhasil mengirimkan virus ||\n ";
    cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    //PEMILIHAN
    pilih2:
    cout<<" Coba Lagi [1]\n ";
    cout<<" Keluar [2]\n ";
    cout<<" Pilih : ";cin>>pilih;
    if(pilih == 1){
        goto wira;
    }else if(pilih == 2){
        cout<<"  ||============================||\n";
        cout<<"  || Selamat Anda Kena Frank :v ||\n";
        cout<<"  ||============================||\n";
    }else {
        cout<<"  ||=================================||\n";
        cout<<"  || Pilihan Yang Anda Masukan Salah ||\n";
        cout<<"  ||=================================||\n";
        goto pilih2;
    }getch();
    return 0;
    }
