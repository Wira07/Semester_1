#include <iostream>
#include <conio.h>
using namespace std;
main(){
	//VARIABLE
	int ph, pjk, hsl, pilih, ulang, ulang2;
	//PROGRAM
	ulang:
	cout <<"\n MENGHITUNG PAJAK SESUAI PENGHASILAN "<< endl;
	cout <<" ===================================\n ";
	cout <<"Masukan Penghasilan, Rp. ";
	cin >> ph;
	//PROSES
	if ((ph <= 25000000) && (ph >= 0)){
		hsl = ph * 10 /100;
	}else if ((ph >= 25000000) && (ph < 50000000)){
		hsl = ph * 15 /100;
	}else if ((ph >=50000000) && (ph <=100000000)){
		hsl = ph * 20 /100;
	} if (ph >=100000001) {
		hsl = ph * 25 /100;
	}
	cout <<" Pajak Yang Harus Dibayar  Rp. "<<hsl;
	cout << endl << endl;
	getch();
	//PEMILIHAN
	ulang2:
	cout <<" Coba Lagi [1] \n";
	cout <<" Keluar [2] \n";
	cout <<" Pilih : ";
	cin >> pilih;
	if (pilih == 1){
		goto ulang;
	}if (pilih == 2){
		cout <<" |============================================|\n";
		cout <<" | Terima Kasih Sudah Menggunakan Program INI |\n";
		cout <<" |============================================|\n";
	}else {
		cout <<" |==================================|\n";
		cout <<" | Pilihan Yang Anda Masukan salah! |\n";
		cout <<" |==================================|\n";
		goto ulang2;
	}getch();
	return 0;
}



/*#include <stdio.h>
int main()

{
 int penghasilan, pajak, hasil_akhir;
 
 printf ("Pajak Tahunan Penghasilan Perusahaan \n\n");
 printf ("Masukan nominal penghasilan Rp ");
 scanf ("%d",&penghasilan);
 
 
 if (penghasilan < 25000001)
 {
  hasil_akhir = penghasilan * 10 /100;
 }
 else
  if (penghasilan < 50000001)
  {
   hasil_akhir = penghasilan * 15 /100;
  }
  else
   if (penghasilan < 100000001)
   {
    hasil_akhir = penghasilan * 20 /100;
   }
   else
    if (penghasilan >= 100000001)
    {
     hasil_akhir = penghasilan * 25 /100;
    }
    
printf ("Pajak Rp %d",hasil_akhir);
}
*/