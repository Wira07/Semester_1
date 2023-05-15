#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  show:
  int array[100], i, n, ulang;
  float rata, total=0;
  system("cls");
  cout << "| Menghitung Frekuensi dan Rata-rata Data Input |\n";
  cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
  cout << "\nInput Banyak Data : ";
  cin  >> n;
  cout << "+-+-+-+-+-+-+-+-+-+\n";
  for(i=0; i<n; i++){
        cout << "Input Data ke " << i+1 << " : ";
        cin >> array[i];
        total = total + array[i];
    }
  rata = total/n;
  cout << "+-+-+-+-+-+-+-+-+-+\n";
  cout << "Frekuensi dari Data Adalah : " << total << endl;
  cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
  cout << "Rata-Rata dari Data Adalah : " << rata << endl;
  cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";  
  cout << "\nMau Coba Lagi ? [y/n] : ";
  ulang = getch();
  if(ulang == 'y'){
    cout << "\n\n";
    goto show;
  }
  if(ulang == 'n'){
      cout << "\n+----------------+\n";
      cout << "| Program Selesai |\n";
      cout << "+-----------------+-----+\n";
      cout << "| Nama : Egy Firmansyah |\n";
      cout << "| Kelas: TI-NFC 2020 03 |\n";
      cout << "+-----------------------+\n";
  }
  getch();
  return 0;
}
