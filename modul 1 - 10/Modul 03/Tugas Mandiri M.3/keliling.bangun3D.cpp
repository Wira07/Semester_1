#include <iostream>
using namespace std;
// dua bangun 3D
int main()
{
    float s,L,Kp,Ksg;
    cout<<"menghitung luas bangun 3 Dimensi "<<endl;
    cout<<"masukkan nilai sisi : ";
    cin>>s;
    L=s*s;
    Kp=s*4;
    Ksg=s*3;
    cout << "\n Keliling persegi : "<< Kp <<"cm"<<endl;
    cout << " Luas persegi     : "<< L <<"cm2\n"<<endl;
    cout << " Keliling segitiga  : "<< Ksg <<"cm"<<endl;
    cout << " Luas segitiga      : "<< L <<"cm2\n"<<endl;
    return 0;
}
