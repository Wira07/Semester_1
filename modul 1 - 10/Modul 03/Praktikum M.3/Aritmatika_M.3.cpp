#include <iostream>
#include <conio.h>
using namespace std;
main(){
    int k, l, m, n, o, p, q, r;
    cout << "\n Masukan nilai ke - 1 : ";
    cin >> k;
    cout << " Masukan nilai ke - 2 : ";
    cin >> l;
    cout << " Masukan nilai ke - 3 : ";
    cin >> m;
    // proses
    o = (k + l) * m;
    p = k * l * m;
    q = o + p * m;
    r = o - p + q;
    // menampilkan
    cout << "#=============================#\n";
    cout << " Hasil operasi (k + l) *m :"<< o <<endl;
    cout << " Hasil operasi k * l * m : "<< p <<endl;
    cout << " Hasil operasi o + p * m : "<< q <<endl;
    cout << " Hasil operasi o - p + q : "<< r <<endl;
    getch();
return 0;
}
    //SUBLEME TEXT 3