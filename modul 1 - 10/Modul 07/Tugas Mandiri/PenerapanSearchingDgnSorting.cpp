#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  cout <<"\n * MENCARI DAN MENGURUTKAN NAMA * "<< endl;
  cout <<" |==============================| "<< endl;
  show:
  string buah[10];
  int length = sizeof(buah)/ sizeof(*buah);
  string dtCari, tmp;
  int hasilCari=0, ulang, n;
  cout <<"\n Input Banyak Data: ";
  cin  >> n;
  for(int i = 1; i <= n; i++){
    cout <<" Data Ke "<< i <<". ";
    cin  >> buah[i];
  }
  /*
  cout <<"\n Data Yang Diinputkan: \n";
  for(int i = 1; i <= n; i++){
    cout <<" ";
    cout << i <<". "<< buah[i] << endl;
  }*/
  for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
      if(buah[i] > buah[j]){
        tmp = buah[i];
        buah[i] = buah[j];
        buah[j] = tmp;
      }
    }
  }
  cout <<"\n Data Diurutkan: \n";
  for(int i = 1; i <=         n; i++){
    cout <<" ";
    cout << i <<". "<< buah[i] << endl;
  }

  cout <<"\n Cari Data: ";
  cin  >> dtCari;
  for(int b = 0; b < n; b++){
    if(dtCari == buah[b]){
      hasilCari=1;
      cout <<" Data ["<< dtCari <<"] Ditemukan pada";
      cout <<" Nomer Ke "<< b <<"."<< endl;
      break;
    }
  }
  if(hasilCari == 0){
    cout <<" Data ["<< dtCari <<"] Tidak Ditemukan "<< endl;
  }
  // Pemilihan Dengan Boolean
  cout <<"\n Mau Coba Lagi ? [y/n] : ";
  ulang = getch();
  if(ulang == 'y'){
    cout <<"\n";
    goto show;
  }if(ulang == 'n'){
    cout <<" T E R I M A K A S I H "<< endl;
  } 
  cin.get();
  return 0;
}
