#include <iostream>
#include <conio.h>
using namespace std;
void nama(){
    cout <<" +------------+"<< endl;
    cout <<" | Program By |"<< endl;
    cout <<" +------------+-----------+\n";
    cout <<" | Nama  : EGY FIRMANSYAH |\n";
    cout <<" | Kelas : TI-NFC 2020 03 |\n";
    cout <<" +------------------------+\n";
}
int main(){
    cout <<"\n | PROGRAM COLLATZ SEQUENCE |"<< endl;
    cout <<" +--------------------------+"<< endl;
    show:
    int n, ulang;
    cout <<"\n Enter a Number : ";
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
    cout <<" Mau Coba Lagi ? [y/n] : ";
    ulang = getch();
    if(ulang == 'y'){
        cout << endl;
        goto show;
    }if(ulang == 'n'){
        cout <<"\n";
        nama();
    }
    cin.get();
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