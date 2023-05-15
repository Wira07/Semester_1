#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

 main(){
    int A[4][4],i,j,k;
    cout <<"\n | PERKALIAN MATRIK (4 x 4) |\n";
    cout <<" |==========================|\n";
    cout<<" | inputkan matrik  : \n";
    cout<<" |------------------- \n";
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
        cout <<" Elemen ke "<< (i+1) <<","<< (j+1) <<" : ";
        cin  >> A[i][j];
      }
   }
   cout <<"\n | Matrik (4 x 4) |\n";
   cout <<" |----------------|\n";
   for (i = 0; i < 4; i++){
        for (j = 0; j < 4 ;j++){
        cout << setw(4) << A[i][j];
      }
      cout << endl;
   }
   cout <<" |----------------| \n";
  
    getch();
    return 0;
}












/*#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int matriks[4][4];
	int i,j;
	cout <<" Isi Data Matriks \n";
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			cout <<" Matrik ["<< (i+1) <<"],["<< (j+1) <<"] : ";
			cin  >> matriks [i][j];
		}
	}
	cout <<" Hasil Data  Inputan Matriks 4 x 4 : "<< endl;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			cout << matriks [i][j] <<" ";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}
*/