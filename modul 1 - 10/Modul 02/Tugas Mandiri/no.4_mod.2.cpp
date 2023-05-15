#include <iostream>
#include <float.h>
#include <stdio.h>
using namespace std;
int main(){
     int a,b,c,jumlah;
     float c2,jumlah2;
    string operasi;
    cout<<"Masukkan dua bilangan sembarang = ";
    cin>>a;
    cin>>b;
    cout<<"Formulasi kedua bilangan adalah : \n";
    cout<<"<=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=>\n"<<endl;
      c=(a+b);
    operasi='+';
    cout<<a<<" "<<operasi<<" "<<b<<" = ";
    jumlah=c;
    cout<<jumlah<<endl;;
      c=(a-b);
    operasi='-';
    cout<<a<<" "<<operasi<<" "<<b<<" = ";
    jumlah=c;
    cout<<jumlah<<endl;;
      c=(a*b);
    operasi='*';
    cout<<a<<" "<<operasi<<" "<<b<<" = ";
    jumlah=c;
    cout<<jumlah<<endl;
      c2=(float (a)/b);
    operasi='/';
    cout<<a<<" "<<operasi<<" "<<b<<" = ";
    jumlah2=c2;
    cout<<jumlah2<<endl;
      c=(a%b);
    operasi='%';
    cout<<a<<" "<<operasi<<" "<<b<<" = ";
    jumlah=c;
    cout<<jumlah<<endl<<endl;
    cout<<"<=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=>"<<endl;
    return 0;
}

























/*#include <iostream>
using namespace std;
    main(){
    int a,b,c,hasil;
    string operasi;
    cout<<"ketik dua bilangan bulat : ";
    cin>>a;
    cin>>b;
    cout<<"formulasi kedua bilangan adalah : \n";
    c=(a+b);
    operasi='+';
    cout<<a<<operasi<<b;
    hasil=c;
    cout<<endl;
    c=(a-b);
    operasi='-';
    cout<<a<<operasi<<b;
   hasil=c;


}
*/






























/*
    main(){
    float nilai[2];

    nilai[0] = 100 ;
    nilai[1] = 30 ;

    cout <<"Nilai ke-1: " << nilai[0] << endl;
    cout<<"Nilai ke-2: " << nilai[1] << endl;
    cout<<"Masukan nilai ke-1 : ";
    cin>>nilai[0];
    cout<<"Masukan nilai ke-2 : ";
    cin>>nilai[1];


    cout<<"\n\nHasil formulasi kedua nilai adalah  : "<<endl;
    cout<<"100 + 30 = "<<nilai[0]+30<<endl;
    cout<<"100 - 30 = "<<nilai[0]-30<<endl;
    cout<<"100 * 30 = "<<nilai[0]*30<<endl;
    cout<<"100 / 30 = "<<nilai[0]/30<<endl;
  // cout<<nilai[0]%30<<endl;

    return 0;
}
*/
