/*#include <iostream>
using namespace std;
int main(){
    int a,b,c,jumlah;
    string operasi;
    cout<<"Masukkan Nilai pertama = ";
    cin>>a;
    cout<<"Masukkan Nilai Kedua = ";
    cin>>b;
    cout<<"\n==============HASIL============="<<endl;
    c=(a*b);
    operasi=' ';
    cout<<a<<operasi<<b<<"\t = ";
    jumlah=c;
    cout<<jumlah<<endl<<endl;
}
*/
#include <iostream>
using namespace std;
int main(){
    int a,b,c,jumlah;
    string operasi;
    cout<<"Masukkan dua bilangan sembarang = ";
    cin>>a;
    cin>>b;
    cout<<"(diinputkan)\t";
  //  cout<<"\n==============HASIL============="<<endl;
    c=(a*b);
    operasi=' ';
    cout<<a<<operasi<<b<<" = ";
    jumlah=c;
    cout<<jumlah<<endl<<endl;
    return 0;
}
