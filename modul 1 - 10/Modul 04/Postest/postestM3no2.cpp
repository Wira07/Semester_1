#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float E, K, R, F;
    int pilih, pil, pilihan, konversi;
    konversi:
    cout<<"\n PILIH KONVERSI SUHU KE :"<<endl;
    cout<<" 1. Fahreit \n";
    cout<<" 2. Kelvin \n";
    cout<<" 3. Reamur \n";
    cout<<" Masukan pilihan : ";
    cin>>pilihan;
    cout<<" Masukan Nilai Suhu : ";
    cin>>pilih;
    //PROSES
    K = E * 1.8 + 32;
    R = E + 273.15;
    F = E * 0.8;
    switch(pilihan){
      case 1:
    K = E * 1.8 + 32;
    R = E + 273.15;
    F = E * 0.8;
    cout <<"\n\tHasil Konversi Suhu Dari Celcius ke :\n";
    cout <<"\t Fahrenheit, Adalah = "<< K << endl;
    break;
      case 2:
    K = E * 1.8 + 32;
    R = E + 273.15;
    F = E * 0.8;
    cout <<"\n\tHasil Konversi Suhu Dari Celcius ke :\n";
    cout <<"\t Kelvin, Adalah     = "<< R <<endl;
    break;
      case 3:
    K = E * 1.8 + 32;
    R = E + 273.15;
    F = E * 0.8;
    cout <<"\n\tHasil Konversi Suhu Dari Celcius ke :\n";
    cout <<"\t Reamur, Adalah     = "<< F << endl;
    break;
    default:
        cout<<" yang anda masukan salah \n";
    }
    cout<<"\nCoba Lagi [1]"<<endl;
    cout<<"Keluar    [2]"<<endl;
    cout<<"Pilih : "; cin>>pilih;
       if (pilih==1)
       {
       goto konversi;
       }
       if (pilih==2){
        cout <<" |============================================|\n";
        cout <<" | Terima Kasih Telah Menggunakan Program INI |\n";
        cout <<" |============================================|\n";
       }
    cin.get();
    return 0;
}