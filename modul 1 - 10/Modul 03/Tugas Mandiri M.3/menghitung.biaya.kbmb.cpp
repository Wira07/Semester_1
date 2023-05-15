#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
main(){
    int a, b, c;
    float kb=7, mb=1024;
    cout <<"\n\t   Menghitung  Biaya "<<endl;
    cout <<"\t#====================#"<<endl;
    cout <<"\t  Masukan Jumlah buku yang di beli : ";
    cin >> a;
    b = a * kb;
    c = a * mb;
    cout <<"#=========================================#\n";
    printf(" biaya anda dalam membeli buku adalah = %d ",b);
    cout << endl;
    printf(" biaya anda dalam mega byte adalah = %d ",c);
    cout << endl;
    getch();
return 0;
}
