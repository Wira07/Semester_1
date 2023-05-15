#include <conio.h>
#include <iostream>
using namespace std;
main(){
    //Variabel
        int uang, A50rb, cek, pil, pilih, pilihan;
        pilihan:
        cout <<"\n Menghitugn Jumlah Pecahan Uang, Kelipatan 50.000 "<<endl;
        cout <<"#=================================================#\n";
        cout <<"\n Masukan Jumlah Uang : ";
        cin >> uang;
        cek = uang%50000;
    if(cek==0){
        A50rb=uang/50000;
        uang=uang%1000;
        cout <<" ";
        cout << A50rb <<" buah pecahan Rp 50.000, \n";
   }else{
    cout <<"\n||=================================================||\n";
    cout <<"|| Maaf uang yang anda inputkan bukan kelipatan 50 ||\n";
    cout <<"||=================================================||\n\n";
        goto pil ;
    }
    getch();
    pil :
    cout <<" #==================================================#\n";
    cout <<" Coba Lagi [1] "<< endl;
    cout <<" Keluar    [2] "<< endl;
    cout <<" Pilih : ";cin >> pilih;
    if (pilih==1){
        goto pilihan;
    }
    if (pilih==2){
          system("cls");
        system("pause");
     }
     getch();
    return 0;
}