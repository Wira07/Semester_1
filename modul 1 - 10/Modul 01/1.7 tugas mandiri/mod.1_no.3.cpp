#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
    //Mendirikan Variabel Dengan Nilainya
    int var_1 = 123456789;
    const float var_2 = 550.987654321234;
    char var_3 = 'R';
    long var_4 = 123456789;
    double var_5 = 550.987654321234;
    //Melakukan Panggilan Vriabel Beserta Nilainya
    cout<<"\nnilai variabel 1: "<<var_1<<endl;
    cout<<"\nnilai variabel 2: "<<var_2<<endl;
    cout<<"\nApakah Karakter Yang di Tampilkan Adalah C++ : "<<var_3<<endl;
    cout<<"\nnilai variabel 3: "<<var_4<<endl;
    cout<<"\nnilai variable 5: "<<var_5<<endl;
    printf("\n%f",var_5);
    return 0;
}
