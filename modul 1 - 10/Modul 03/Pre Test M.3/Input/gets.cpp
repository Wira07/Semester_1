#include <stdio.h>
using namespace std;
int main(){
     char nama[50];
     int nilai;
     printf("Masukkan Nama  : ");
     // Menggunakan gets untuk melakukan
     // Perintah masukan / input
     // Sehingga string inputan bisa mengandung spaci
     gets(nama);
     printf("Masukkan Nilai : ");
     scanf("%d", &nilai);
     printf("\nMahasiswa atas nama %s nilainya %d",nama,nilai);
     return 0;
}
