#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void menyalinString(){
   char nama[20];
   strcpy(nama, "Egy Firmansyah");
   cout <<"Selamat Belajar"<< nama;
}
int main(){
    cout <<"| Menyalin String |"<< endl;
    cout <<"+-----------------+"<< endl;
    menyalinString();

    return 0;
}
