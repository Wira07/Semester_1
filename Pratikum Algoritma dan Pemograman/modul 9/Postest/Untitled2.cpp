#include<iostream>
using namespace std;
int hitung(int a, int b)
{
    int jumlah;
    jumlah = a * b;
    cout<<a<<" * "<<b<<" = ";
    if(jumlah < 0) {
        cout<<jumlah<<" Merupakan bilangan negatif";
    } else if(jumlah > 0) {
        cout<<jumlah<<" Merupakan bilangan positif";;
    }
}
 
int main()
{
    int a, b;
    cout<<" Masukkan angka pertama : ";
    cin>>a;
    cout<<" Masukkan angka kedua : ";
    cin>>b;
    hitung(a,b);
}
