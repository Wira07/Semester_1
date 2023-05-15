#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

 main(){
    int A[4][4],i,j,k,B,C;
    cout <<"\n | PERKALIAN MATRIK (2 x 3) * (3 x 3) |\n";
    cout <<" |====================================|\n";
    cout<<" | inputkan matrik A : \n";
    cout<<" |-------------------- \n";
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
        cout <<" Elemen ke "<< (i+1) <<","<< (j+1) <<" : ";
        cin  >> A[i][j];
      }
   }
   cout <<"\n | Matrik A (2 x 3) |\n";
   cout <<" |------------------|\n";
   for (i = 0; i < 2; i++){
        for (j = 0; j < 3 ;j++){
        cout << setw(4) << A[i][j];
      }
      cout << endl;
   }
   cout << endl;
   cout <<" |====================================|\n";
   cout <<" | Inputkan matrik B : \n";
   cout <<" |-------------------- \n";
   for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        cout <<" Elemen ke "<< (i+1) <<","<< (j+1) <<" : ";
        cin  >> B[i][j];
        }
      }
   cout <<"\n | Matrik B (3 x 3) |\n";
   cout <<" |------------------|\n";
   for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
        cout << setw(4) << B[i][j];
        }
        cout << endl;
     }
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
    C[i][j] = 0;
        for (k = 0; k < 3; k++){
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  cout <<"\n |================================|\n";
  cout <<" | Hasil Perkalian Matrik A x B : |\n";
  cout <<" |================================|\n";
  cout <<" |===============|\n";
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        cout << setw(5) << C[i][j];
        }
    cout << endl << endl;
    }
    cout <<" |===============|\n";
    getch();
    return 0;
}
