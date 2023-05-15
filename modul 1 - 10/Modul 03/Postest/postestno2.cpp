#include <iostream>
using namespace std;

int main(){
    float E, K, R, F;
    cout <<"\n\t------ Program Konversi Suhu -------\n"<< endl;    
    cout <<"\t# Masukan nilai Celcius : ";
    cin>>E;
    K = E * 1.8 + 32;
    R = E + 273.15;
    F = E * 0.8;
    cout <<"\n\tHasil Konversi Suhu Dari Celcius ke :\n\n";
    cout <<"\t# Fahrenheit, Adalah = "<< K << endl;
    cout <<"\t# Kelvin, Adalah     = "<< R <<endl;
    cout <<"\t# Reamur, Adalah     = "<< F << endl;

    cin.get();
    return 0;
}
