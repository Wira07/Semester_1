#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
main(){
    int G, H, D, n, A, B, C, E, S, J, K, L;
    int pil, pilih, pilihan;
    // clrscr();
    cout <<"#========================#\n";
    cout <<" Melakukan Operasi Logika \n";
    cout <<"#========================#\n";
    pilihan :
    cout <<" 1. AND\n 2. NOT\n 3. OR\n 4. XOR\n";
    cout <<" Masukan Pilihan : ";
    cin >> pil;
    cout <<"#========================#\n";
    printf (" Masukan Nilai G = ");
    scanf (" %d",&G );
    printf (" Masukan Nilai H = ");
    scanf (" %d",&H );
    printf (" Masukan Nilai D = ");
    scanf (" %d",&D );
    // proses
    S = (++G * H) < D > 100;            A = S & J && K && L;
    J = (--G + D) < 100;                B = !(A);
    K = (++S) + (--J * G) > 200;        C = S || J || K || L;
    L = S + J + K >150;                 E = S ^ J ^ K ^ L;
    // Tampilkan
     switch(pil){
        case 1:
    getch();
    cout << "\n Program Operasi Logika (AND)\n#============================#"<< endl;
    printf (" Hasil dari hasil 1= nilai G * nilai H < nilai D > 100 Adalah = %d\n", S);
    printf (" Hasil dari hasil 2= nilai G + nilai D * nilai H < 100 adalah = %d\n", J);
    printf (" Hasil dari hasil 3= hasil 1 + hasil 2 * nilai G > 200 adalah = %d\n", K);
    printf (" Hasil dari hasil 4= hasil 1 + hasil 2 + hasil 3 >150 adalah  = %d\n", L);
    printf (" #Maka logika AND  = hasil 1 && hasil 2 && hasil 3 && hasil 4, Adalah = %d", A);
    cout <<endl;
    break;
    getch();
        case 2:
    getch();
    cout << "\n Program Operasi Logika (NOT)\n#============================#"<< endl;
    printf (" Hasil dari hasil 1= nilai G * nilai H < nilai D > 100 Adalah = %d\n", S);
    printf (" Hasil dari hasil 2= nilai G + nilai D * nilai H < 100 adalah = %d\n", J);
    printf (" Hasil dari hasil 3= hasil 1 + hasil 2 * nilai G > 200 adalah = %d\n", K);
    printf (" Hasil dari hasil 4= hasil 1 + hasil 2 + hasil 3 >150 adalah  = %d\n", L);
    printf (" #Maka logika NOT  = hasil 1 ! hasil 2 ! hasil 3 ! hasil 4, Adalah = %d", B);
    cout <<endl;
    break;
        case 3:
    getch();
    cout << "\n Program Operasi Logika (OR)\n#============================#"<< endl;
    printf (" Hasil dari hasil 1= nilai G * nilai H < nilai D > 100 Adalah = %d\n", S);
    printf (" Hasil dari hasil 2= nilai G + nilai D * nilai H < 100 adalah = %d\n", J);
    printf (" Hasil dari hasil 3= hasil 1 + hasil 2 * nilai G > 200 adalah = %d\n", K);
    printf (" Hasil dari hasil 4= hasil 1 + hasil 2 + hasil 3 >150 adalah  = %d\n", L);
    printf (" #Maka logika OR   = hasil 1 || hasil 2 || hasil 3 || hasil 4, Adalah = %d", C);
    cout <<endl;
    break;
        case 4:
    getch();
    cout << "\n Program Operasi Logika (XOR)\n#============================#"<< endl;
    printf (" Hasil dari hasil 1= nilai G * nilai H < nilai D > 100 Adalah = %d\n", S);
    printf (" Hasil dari hasil 2= nilai G + nilai D * nilai H < 100 adalah = %d\n", J);
    printf (" Hasil dari hasil 3= hasil 1 + hasil 2 * nilai G > 200 adalah = %d\n", K);
    printf (" Hasil dari hasil 4= hasil 1 + hasil 2 + hasil 3 >150 adalah  = %d\n", L);
    printf (" #Maka logika XOR  = hasil 1 ^ hasil 2 ^ hasil 3 ^ hasil 4, Adalah = %d", E);
    cout <<endl;
    break;
    default :
    cout <<"#===============================#\n";
    cout<<" Pilihan Yang Anda Masukan Salah "<<endl;
    cout<<"\tPilih 1 - 4 saja "<<endl;
    cout <<"#===============================#\n";
    getch();
}
    cout <<"#====================#\n";
    cout <<" Coba Lagi [1] "<< endl;
    cout <<" Keluar    [2] "<< endl;
    cout <<" Pilih : ";cin >> pilih;
    cout <<"#====================#\n";
    if (pilih==1){
        goto pilihan;
    }
    if (pilih==2){
          system("cls");
        system("pause");
     }
     getch();
return 0;
}