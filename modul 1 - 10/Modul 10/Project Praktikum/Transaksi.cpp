#include <iostream>
using namespace std;
main(){
  system("cls");
  char codeBuku, beli, belanjaKmbl, buku[160];
  float totalByr, jumlahBli, totalBeli, potongan, harga, hargaBuku;
   
  cout <<"\t* 	Toko Buku Gramedia *"<< endl;
  cout <<"\t    Jl. Cijoho Landeuh "<< endl;
  cout <<"\t+--------------------+\n";
  show:
  cout <<"\n Masukkan Kode Buku [1-5] : ";
  cin  >> codeBuku;
  cout <<" Jumlah Pembelian  : ";
  cin  >> jumlahBli;
  cout <<" Nama Buku      :"<< buku;
  switch(codeBuku){
    case ('1'): {
      cout <<" Panduan C++ "<< buku;
      cout <<" Buku Arab "<< buku;
      cout <<" Buku anjog "<< buku;
      hargaBuku = 35000;
      harga = 35000 * jumlahBli;
      }
      break;
      
    case ('2') :{
      cout <<" Visual C++ "<< buku;
      hargaBuku = 25000;
      harga = 25000 * jumlahBli;
      }
      break;
    case ('3') :{
      cout <<" Si Kancil "<< buku;
      hargaBuku = 70000;
      harga = 70000 * jumlahBli;
      }
      break;
    case ('4') :{
      cout <<" Cara Membuat Web "<< buku;
      hargaBuku = 65000;
      harga = 65000 * jumlahBli;
      }
      break;
    case ('5') :{
      cout <<" Sandika Galih "<< buku;
      hargaBuku = 85000;
      harga = 85000 * jumlahBli;
      }
      break;
    }
  cout << endl;
  cout <<" Jumlah Buku    : "<< jumlahBli << endl;
  cout <<" Harga Buku     : Rp."<< hargaBuku << endl;
      if (jumlahBli > 3){
      potongan = 0.3 * harga;
      }
      else{
      potongan= 0;
      }
  cout <<" Total Harga    : Rp."<< harga << endl;
  cout <<" Potongan Harga : Rp."<< potongan << endl;

  totalByr = harga-potongan;
  cout <<" +--------------------------+"<< endl;
  cout <<" Total Bayar    : Rp."<< totalByr << endl;
  cout <<" +--------------------------+"<< endl;
  cout << endl;
  cout <<" Belanja Lagi? [Y/N] : ";
  cin  >> belanjaKmbl;

  if(belanjaKmbl == 'Y' || belanjaKmbl == 'y'){
    goto show;
  }
  if(belanjaKmbl == 'N' || belanjaKmbl == 'n'){
      cout <<" +-----------------+\n";
      cout <<" | Program Selesai |\n";
      cout <<" +-----------------+-----+\n";
      cout <<" | Nama : Wira Sukma Saputra |\n";
      cout <<" | Kelas: TI-NFC 2021 01 |\n";
      cout <<" +-----------------------+\n";
      }
      return 0;
  }
  
