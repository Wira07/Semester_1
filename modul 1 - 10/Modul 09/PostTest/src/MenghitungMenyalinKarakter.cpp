#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
void menghitung();
int main(){
    show:
    system("cls");
    int ulang;
    string a;
    cout << "| Menghitung Jumlah Karakter & Menyalin |\n";
    cout << "+---------------------------------------+\n\n";
    cout << "Masukan Kalimat : ";
    menghitung();
    cout << "\n\nMau Coba Lagi ? [y/n] : ";
    ulang = getch();
    if(ulang == 'y'){
        cout << "\n\n";
        goto show;
    }
    if(ulang == 'n'){
        cout << "\n+----------------+\n";
        cout << "| Program Selesai |\n";
        cout << "+-----------------+-----+\n";
        cout << "| Nama : Egy Firmansyah |\n";
        cout << "| Kelas: TI-NFC 2020 03 |\n";
        cout << "+-----------------------+\n";
    }
    cin.get();
    return 0;
}
void menghitung(){
    int jumlah; 
    string a;
    getline(cin, a);
    jumlah = a.length();
    cout << "Jumlah Karakter '"<< a <<"' = "<< jumlah;
}