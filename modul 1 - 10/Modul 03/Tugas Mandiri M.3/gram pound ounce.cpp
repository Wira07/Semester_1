#include <stdio.h>
#include <iostream>
using namespace std;
main (void){
    float g, o = 28.3495, p = 12, ho, hp;  //variabel
    cout <<" Konversi satuan berat Gram ke Ounce dan Pound\n";
    cout <<" Masukan satuan Gram : ";
    cin >> g;
    ho = g * o;
    hp = g * p;
    cout <<" ";
    cout << g <<" Gram = "<< ho <<" Ounnce, dan "<< hp <<" Pound"<<endl;

    return 0;
}
