#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void menyalinString(){
   char nama[20];
   strcpy(nama, ", Egy Firmansyah");
   cout <<"\nSelamat Belajar"<< nama;
}
int main(){
    system("cls");
    cout <<"\n| Menyalin String Dengan Farameter Fungction |"<< endl;
    cout <<"+--------------------------------------------+"<< endl;
    menyalinString();
    getch();
    return 0;
}
