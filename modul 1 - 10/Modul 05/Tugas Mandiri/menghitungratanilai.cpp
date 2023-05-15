#include <iostream>
#include <conio.h>
using namespace std;

main() {
    float nilai, total, rata;
    int jumlah;
    cout << endl;
    cout <<" | Mencari Rata-Rata Nilai. (Jumlah Nilai ditentukan) |\n";
    cout <<" |====================================================|\n";
    ulang:
    cout <<"  Masukkan Jumlah Nilai : "; cin >> jumlah;
    cout << endl;
    for (int i = 1; i <= jumlah; i++) {
        cout <<"  Masukkan Nilai Ke "<< i <<" : ";
        cin >> nilai;
        total = total + nilai;
    }
    cout << endl << endl;
    cout << "  Total              : " << total << endl;
    rata = total / jumlah;
    cout << "  Rata-rata          : " << rata << endl;
  
}
