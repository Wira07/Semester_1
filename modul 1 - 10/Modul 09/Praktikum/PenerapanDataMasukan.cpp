#include <iostream>
#include <conio.h>
#define n 5
using namespace std;
void data(float a[n]){
    for(int i = 0; i < n; i++){
        cout <<" Data Ke : "<< i+1 <<" : ";
        cin  >> a[i];   }
           }
float maendata(float a[n]){
    float d = 0;
    for(int i = 0; i < n; i++){
        d += a[i];
    }return d/n;
}
int main(){
    system("cls");
    cout << "| Menghitung Retata Data Masukan |\n";
    cout << "+--------------------------------+\n\n";
    float a[n], mean;
    data(a);
    mean = maendata(a);
    cout << endl;
    cout <<" Mean \t : "<< mean << endl;
    getch();
}