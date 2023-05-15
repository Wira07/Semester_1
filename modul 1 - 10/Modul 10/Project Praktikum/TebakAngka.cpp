#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
  system("cls");
    cout << "\t * Tebak Angka dari 1-10 (Cari angka X) *\n";
    cout << "\t+----------------------------------------+\n";
    cout << "\t      Kamu Punya 3 kali Kesempatan\n";
    cout << "\t     +----------------------------+\n";
    
    int tebak, ulang, arr[1];
    arr[0] = rand() % 5;
    show:
    for (int i = 2; i >= 0; i--){
        cout << "\nKesempatan mu untuk menebak sisa " << i+1 << " kali";
        cout << "\nTebak Angka: ";
        cin  >> tebak;
        if(arr[i] == tebak){
            cout << "+----------------------------------------+\n";
            cout << "| Angka X adalah '[" << tebak << "]' KAMU BERHASIL !!! |\n";
            cout << "+----------------------------------------+\n";
            break;
        }else if(i > 0){
          cout << "\nSalah !!! Coba Lagi !!!\n";
        }else 
          cout << "\nKamu gagal menebak angka.\n";
    }
    cout << "\nMau Coba Lagi ? [Y/N] : ";
    ulang = getch();
    if(ulang == 'Y' || ulang == 'y'){
        cout <<"\n";
        goto show;
    }
    if(ulang == 'N' || ulang == 'n'){
        cout << "\n+----------------+\n";
        cout << "| Program Selesai |\n";
        cout << "+-----------------+-----+\n";
        cout << "| Nama : Wira Sukma Saputra |\n";
        cout << "| Kelas: TI-NFC 2020 01 |\n";
        cout << "+-----------------------+\n";
    }
   
    getch();
    return 0;
}
