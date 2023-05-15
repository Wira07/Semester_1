#include <iostream>
#include <conio.h>
using namespace std;
main(){
    int nilai1, nilai2, h;
    cout << "\n Mealakukan Operasi Relasi Terhadap Dua Nilai "<< endl;
    cout << " Masukan Nilai 1 = "; cin>>nilai1;
    cout << " Masukan Nilai 2 = "; cin>>nilai2;
    getch();
    cout <<"#=============================#\n";
    cout << " Apakah nilai 1 == nilai 2 "<< endl;
    getch(); h = nilai1 == nilai2;
    cout << " Hasilnya = "<< h <<endl;
    cout <<"#=============================#\n";
    cout << " Apakah nilai 1 != nilai 2 "<< endl;
    getch(); h = nilai1 != nilai2;
    cout << " Hasilnya = "<< h <<endl;
    cout <<"#=============================#\n";
    cout << " Apakah nilai 1 < nilai 2 "<< endl;
    getch(); h = nilai1 < nilai2;
    cout << " Hasilnya = "<< h <<endl;
    cout <<"#=============================#\n";
    cout << " Apakah nilai 1 > nilai 2 "<< endl;
    getch(); h = nilai1 > nilai2;
    cout << " Hasilnya = "<< h <<endl;
    cout <<"#=============================#\n";
    cout << " Apakah nilai 1 <= nilai 2 "<< endl;
    getch(); h = nilai1 <= nilai2;
    cout << " Hasilnya = "<< h <<endl;
    cout <<"#=============================#\n";
    cout << " Apakah nilai 1 >= nilai 2 "<< endl;
    getch(); h = nilai1 >= nilai2;
    cout << " Hasilnya = "<< h <<endl;
    getch();
return 0;
}
