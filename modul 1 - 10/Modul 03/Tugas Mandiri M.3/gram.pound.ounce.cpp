#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
   char nama[20], tunjangan_nikah[2], gol[6];
   int total_gaji, total, nkh;
 long y, n, bi, bii, biii, gpi, gpii, gpiii;
   y   = 75000;
   n   = 20000;
   bi  = 150000;
   bii   = 175000;
   biii  = 200000;
   gpi  = 2000000;
   gpii  = 2750000;
   gpiii = 3500000;

repeat:
   cout << "nama   : "; gets (nama);
   cout <<endl;
   cout << "Status: nikah (y/n)  : "; cin >> tunjangan_nikah;
   cout <<endl;
   cout << "gol (i/ii/iii)  : "; cin >> gol;
   cout <<endl;
 if (strcmp(tunjangan_nikah,"y"==0 ){nkh = y;}
   else if (strcmp tunjangan_nikah,"n"==0){nkh = n;}
   else {cout <<"\n >>>Kode Yang Anda Masukan Salah<<<!!!"<< endl <<endl;
   goto repeat;}
   if(strcmp(gol,"i")==0){total = bi + gpi;}
   else if(strcmp(gol,"ii")==0{total = bii + gpii;}
   else if(strcmp(gol,"iii")==0{total = biii + gpiii;}
   else{cout <<"\n >>>Kode Yang Anda Masukan Salah<<<!!!"<< endl <<endl;
   goto repeat;}
   total_gaji = nkh + total;
   cout << "total gaji  :Rp"<< total_gaji;

getch();
}




/*#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
main (void){
    float g, o = 28.3495, p = 12, ho, hp;  //variabel
    cout <<"\n Konversi satuan berat Gram ke Ounce dan Pound\n";
    cout <<"#===============================================#\n";
    cout <<" Masukan satuan Gram : ";
    cin >> g;
    ho = g * o;
    hp = g * p;
    cout <<"\n#=================================#\n";
    cout <<" "<< g <<" Gram = "<< ho <<" Ounnce, "<<endl;
    cout <<" "<< g <<" Gram = "<< hp <<" Pound, "<<endl;
    getch ();
    return 0;
}

float gram, ounce= 28.3495, pound= 12, hasil_ounce, hasil_pound;
	cout <<" Konversi satuan gram ke on, poun"<< endl;
	cout <<" masukan nilai gram : ";cin>> gram;
	hasil_ounce = gram * ounce ;
	hasil_pound = gram * pound ;
	cout << gram <<" Gram = "<< hasil_ounce <<" Ounce "<<endl;
	cout << gram <<" Gram = "<< hasil_pound <<" pound \n";
	 */
