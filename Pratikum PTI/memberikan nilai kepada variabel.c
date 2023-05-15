#include <stdio.h>

void main(){
	char nama_barang[10];
	int jumlah;
	float harga_per_unit, harga_total; jumlah = 10;
	harga_per_unit = 17.5;
	harga_total = jumlah * harga_per_unit;
	printf(" nama barang : ");
	scanf("%s", &nama_barang);
	printf(" jumlah barang : ");
	scanf("%s", &jumlah);
	printf(" total pembelian = %f\n", harga_total);
}
