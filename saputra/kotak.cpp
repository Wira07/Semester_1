#include <iostream>
using namespace std;

int main()
{
    int tinggi, lebar;
    cout << " Tinggi kotak : ";
    cin>>tinggi;
    cout << " lebar kotak : ";
    cin>>lebar;

    int baris, kolom;
    //buat biingkai atas
    for( kolom = 1; kolom <= lebar; kolom++)
        cout<<'@';
    cout<<endl;
    // buat kiri dan kanan untuk
    // baris = 2 s/d (tinggi-1)
    for  (baris = 2; baris <= tinggi-1; baris++){
        cout<<'@';
        for (kolom = 2; kolom <= lebar-1; kolom++)
        cout<<' ';//spaci
        cout<<'@'<<endl;
    }
    //buat bingkai bawah
    for (kolom = 1; kolom <= lebar; kolom++){
        cout<<'@';
        cout<<endl;
    }
    return 0;
}
