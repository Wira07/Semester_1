#include <stdio.h>
using namespace std;
int main(){
     char nama[50];
     int nilai;
     printf("Masukkan Nama  : ");
     scanf("%s", &nama);
     printf("Masukkan Nilai : ");
     scanf("%d", &nilai);
     printf("\nMahasiswa atas nama %s nilainya %d",nama,nilai);
     return 0;
}
