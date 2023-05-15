#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
main(){
    int k, l, m, n, o, p, q, r;
    // clrscr();
    printf ("\n Masukan nilai ke-1 = ");
    scanf (" %d",&k );
    printf (" Masukan nilai ke-2 = ");
    scanf (" %d",&l );
    printf (" Masukan nilai ke-3 = ");
    scanf (" %d",&m );
    // proses
    o = (k + l) * m < 100;
    p = k * l * m > 100;
    q = o + p <500;
    r = o && p && q;
    //t\ Tampilkan
    getch();
    cout <<"#===============================#\n";
    cout <<" Program Operasi Logika AND "<<endl;
    getch();
    printf (" Hasil dari Nilai ke-4 = (Nilai ke-1 + Nilai ke-2) x Nilai ke-3 < 100 adalah = %d\n",o);
    getch();
    cout << " Hasil dari Nilai ke-5 = Nilai ke-1 + Nilai ke-2 + Nilai ke-3 > 100 adalah = "<< p <<endl;
    getch();
    printf (" Hasil dari Nilai ke-6 = Nilai ke-4 + Nilai ke-5 < 500 adalah = %d",q);
    getch();
    cout << "\n Maka logika AND = Nilai ke-4 && Nilai ke-5 && Nilai ke-6 adalah = "<< r;
    cout <<endl;
getch();
return 0;
}
