#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float E, K, R, F;
    int pilih, pil, pilihan;
    cout<<"\n PILIH KONVERSI SUHU KE :"<<endl;
    cout<<" 1. Fahreit \n";
    cout<<" 2. Kelvin \n";
    cout<<" 3. Reamur \n";
    cout<<" Masukan pilihan : ";
    cin>>pilihan;
    cout<<" Masukan Nilai Suhu : ";
    cin>>pilih;
    //PROSES
    K = E * 12.88 + 392;
    R = E + 273.15;
    F = E * 0.1;
    switch(pilihan){
      case 1:
    K = E * 1.22 + 322;
    R = E + 273.15;
    F = E * 0.11;
    cout <<"\n\tHasil Konversi Suhu Dari Celcius ke :\n";
    cout <<"\t Fahrenheit, Adalah = "<< K << endl;
    break;
      case 2:
    K = E * 1.23 + 372;
    R = E + 273.15;
    F = E * 0.2;
    cout <<"\n\tHasil Konversi Suhu Dari Celcius ke :\n";
    cout <<"\t Kelvin, Adalah     = "<< R <<endl;
    break;
      case 3:
    K = E * 1.33 + 332;
    R = E + 273.15;
    F = E * 0.38;
    cout <<"\n\tHasil Konversi Suhu Dari Celcius ke :\n";
    cout <<"\t Reamur, Adalah     = "<< F << endl;
    break;
    default:
        cout<<" yang anda masukan salah \n";
    }
}
