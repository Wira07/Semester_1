#include <iostream>
#include <conio.h>
using namespace std;
void nama(){
    cout << "\n+-----------------+\n";
    cout << "| Program Selesai |\n";
    cout << "+-----------------+------+\n";
    cout << "| Nama  : EGY FIRMANSYAH |\n";
    cout << "| Kelas : TI-NFC 2020 03 |\n";
    cout << "+------------------------+\n";
}
int main(){
    cout << "\n| MENGUJI KESAMAAN TYPE DATA |\n";
    cout << "+----------------------------+\n";
    show:
    int n1, n2, ulang;
    float m1, m2;
    cout << "\nKetik Dua Integer : ";
    cin  >> n1; cin >> n2;
    cout << "Ketik Dua Float   : ";
    cin  >> m1; cin >> m2;

    if ((n1 == n2) && (m1 != m2)){
        cout << "Kedua Integer Bernilai Sama, ";
        cout << "Dan Kedua Float Berbeda\n\n";
    }
    else if ((n1 == n2) && (m1 == m2)) {
        cout << "Kedua Integer Bernilai Sama, ";
        cout << "Dan Kedua Float Sama\n" << endl;
    }
    else if ((n1 != n2) && (m1 != m2)) {
        cout << "Kedua Integer Bernilai Beda, ";
        cout << "Dan Kedua Float Berbeda\n" << endl;
    }
    else if ((n1 != n2) && (m1 == m2)){
        cout << "Kedua Integer Bernilai Beda, ";
        cout << "Dan Kedua Float Sama\n" << endl;
    }

    cout << "Mau Coba Lagi ? [y/n] : ";
    ulang = getch();
    if (ulang == 'y'){
        cout << "\n";
        goto show;
    }
    if (ulang == 'n'){
        nama();
    }

    getch();
    return 0;
}