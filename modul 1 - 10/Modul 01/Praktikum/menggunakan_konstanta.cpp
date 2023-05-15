#include<iostream>
#include<stdio.h>
using namespace std;
#define var_6 550.987654321234
int main (){
    //Mendirikan Variabel Dengan Nilainya
    int var_1 = 123456789;
    const float var_2 = 550.987654321234;
    char var_3 = 'R';
    long var_4 = 123456789;
    double var_5 = 550.987654321234;
    //Melakukan Panggilan Vriabel Beserta Nilainya
    cout<<var_1<<endl;
    cout<<var_2<<endl;
    cout<<"Apakah Karakter Yang di Tampilkan Adalah C++ :"<<var_3<<endl;
    cout<<var_4<<endl;
    cout<<var_5<<endl;
    printf("%f",var_5);
    cout<<var_6<<endl;
    printf("%le",var_6);
    return 0;
}
