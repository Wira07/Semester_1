#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int array[100], n;
    float rata, total;

    cout <<"\n | Menghitung Rata Rata Nilai Elemen Array |\n";
    cout <<" |=========================================|\n";
    cout <<"\n  Masukan Banyak Nilai : ";
    cin  >> n;
    for (int i = 1; i <= n; i++){
      cout <<"  Nilai Ke ["<< i <<"] = ";
      cin  >> array[i];
      total = total + array[i];
    }
    cout << endl;
    rata = total / n;
    cout <<" Hasil Total Nilai = "<< total << endl;
    cout <<" Hasil Rata-Rata Nilai = "<< rata << endl;

    cin.get();
  return 0;
}





/*#include <iostream>
using namespace std;
int main(){
  int array[100], i, n;
  float rata, total=0;
 
  cout << "Program Menghitung Nilai Rata-rata dengan Array" << endl;
  cout << "===============================================" << endl;
  cout << "Masukkan banyaknya elemen array: ";
  cin >> n;
  for(i=0; i<n; i++){
    cout << "Nilai Ke-" << i+1 << " : ";
    cin >> array[i];
    total = total + array[i];
  }
  rata = total/n;
  cout << "Hasil nilai total adalah : " << total << endl;
  cout << "Hasil rata-rata adalah : " << rata << endl;
  return 0;
}*/