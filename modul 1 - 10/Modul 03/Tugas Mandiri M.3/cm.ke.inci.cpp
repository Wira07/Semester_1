#include <iostream>
using namespace std;
main(){
    float cm,m,inci;
    cout <<"\n Konversi dari M ke Cm dan Inchi "<<endl;
    cout <<"#===================================#\n";
    cout <<" Masukan Nilai Meter : ";cin>>m;
    cm = 100 * m;
    inci = (100 * m) / 2.54;
    cout <<" Hasil : "<<endl;
    cout <<" "<< m <<" Meter "<<" = "<< cm <<" Cm "<<endl;
    cout <<" "<< m <<" Meter "<<" = "<< inci <<" Inci "<<endl;
    return 0;
}
