#include <iostream>
#include <conio.h>
using namespace std;
 int main(){
 	cout <<"\n | Menerapkan Array 2Dimensi Untuk Membuat Matrik Ordo 2 x 2 |\n";
 	cout <<" |===========================================================|\n";
 	int i, j;
 	int data [2] [2] = {{1,2},{2,1}};
 	cout << endl;
 	for (i = 0; i < 2; i++){
 		for (j = 0; j < 2; j++){
 			cout <<"  "<< data [i] [j] ;
 			cout <<" ";
 		}
 		cout << endl;
 	}
 	getch();
 	return 0;
 }
