#include <iostream>
#include <conio.h>
using namespace std;
void nama(){
    cout <<" +-----------------+"<< endl;
    cout <<" | Program Selesai |"<< endl;
    cout <<" +-----------------+-----------+\n";
    cout <<" | Nama  : Wira Sukma Saputra |\n";
    cout <<" | Kelas : TI-NFC 2021 A |\n";
    cout <<" +----------------------------+\n";
}
int main(){
    cout <<"\n | PROGRAM COLLATZ SEQUENCE |"<< endl;
    cout <<" +--------------------------+"<< endl;
    show:
    int n;
    cout <<"\n Masukan Nomor : ";
    cin  >> n;
    cout <<" Hasil :";
    while(n != 1){
        if(n % 2 == 1){
            n = (3 * n) + 1;
        }
        else
            n /= 2;
            cout <<" "<< n;
        }
    cout << endl << endl;
    return 0;
}




/*#include <stdio.h>
int main()
{
    int n, jumlah = 0;
    printf("Masukan nilai n : ");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++)
    {
         printf("%i", i);
         if(i != n) printf(" + ");
         jumlah += i;
    }
    printf("\nJumlah : %i", jumlah);
    return 0;
}
*/
