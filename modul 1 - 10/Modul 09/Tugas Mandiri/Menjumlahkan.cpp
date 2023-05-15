#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

void tambah(float a, float b){ 
    cout << "hasil penjumlahan = ";
    cout << a + b;
    }  
int main(){
    system("cls");
    int a, b, ulang;
    cout << "| Menjumlahkan Dua Buah Bilangan |"<< endl;
    cout << "+--------------------------------+\n\n";
    show:
    cout << "Bilangan Pertama : "; cin  >> a;
    cout << "Bilangan Kedua   : "; cin  >> b;
    tambah(a,b);
    cout << "\n\nMau Coba Lagi ? [y/n] : ";
    ulang = getch();
    if(ulang == 'y'){
        cout <<"\n\n";
        goto show;
    }
    if(ulang == 'n'){
        cout << "\n+-----------------+\n";
        cout << "| Program Selesai |\n";
        cout << "+-----------------+-----+\n";
        cout << "| Nama : Egy Firmansyah |\n";
        cout << "| Kelas: TI-NFC 2020 03 |\n";
        cout << "+-----------------------+\n";
    }
    getch();
    return 0; 
}