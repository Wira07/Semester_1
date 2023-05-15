#include <iostream>
#include <conio.h>
using namespace std;

int main(){
  float suhu;
  int ulang, ulang2, pilih;
  ulang:
  cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=--\n";
  cout<<" Masukan Suhu Tubuh : ";
  cin>>suhu;
  //PROSES
  if ((suhu <= 33) && (suhu >= 9 )){
    cout <<" Masih di nyatakan hidup ";
  }else if (suhu == 34){
    cout <<" terlalu Dingin ";
  }else if (suhu == 35){
    cout <<" Dingin ";
  }else if (suhu == 36){
    cout <<" Masih Ok ";
  }else if (suhu == 37){
    cout <<" keadaan fit ";
  }else if (suhu == 38){
    cout <<" demam ringan ";
  }else if (suhu == 39){
    cout <<" hampir step ";
  }else if ((suhu > 39) && (suhu <= 50)){
    cout <<" Segera Panggil Ambulance ";
  }else {
    cout <<" Segera Panggil Ambulance ";
    cout << endl;
  }getch();
  //PEMILIHAN
  ulang2:
  cout << endl <<"\n Coba Lagi [1] \n";
  cout <<" Keluar [2] \n";
  cout <<" Pilih : "; cin >> pilih;
  if (pilih == 1){
    goto ulang;
  }else if (pilih == 2){
    cout <<" |============================================|\n";
    cout <<" | Terima Kasih Telah Menggunakan Program INI |\n";
    cout <<" |============================================|\n";
  }else {
    cout <<"\n Pilihan Salah !!! ";
    cout <<"\n ================= ";
    goto ulang2;
  }getch();
return 0;
}


/*
{
    int nilai, suhu, pilih;
    cout<<" Kesehatan Sesuai Suhu Tubuh \n";

suhu:
    cout << " Masukkan Suhu Tubuh : ";
    cin >> nilai;
    if  ((nilai >= 30)  && (nilai <= 33)){
       cout << " Masih dinyatakan Hidup";
    } else if ((nilai >= 40) && (nilai <=30)){
       cout << " Segera Panggil Ambulan";
    } else if ((nilai >= 34) && (nilai <= 35)) {
       cout << " Suhu Anda Terlalu Dingin";
    } else if ((nilai >= 36) && (nilai <= 37)) {
       cout << " Masih OK, Anda FIT";
    } else if ((nilai >= 38) && (nilai <= 38)) {
       cout << " Anda Demam Rangan\n";
    } else if ((nilai >= 39) && (nilai <= 39)) {
       cout << " Anda Hampir Step\n";
    } else {
       cout << " Segera Panggil Ambulan\n";
    }
    cout<<"\n=============================="<<endl;
    cout<<"Coba Lagi [1]"<<endl;
    cout<<"Keluar    [2]"<<endl;

         cout<<"Pilih : "; cin>>pilih;
       if (pilih==1)
       {
       goto suhu;
       }
       if (pilih==2)
    getch();
    return 0;
}
*/
