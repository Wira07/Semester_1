#include <iostream>
using namespace std;

int main(){
	cout<<"\t\t<=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=>\t\t"<<endl;
	cout<<"\t\tSelamat di datang toko serba ada\t\t"<<endl;
	cout<<"\t\t<=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=>\t\t"<<endl;
	cout<<"\t\t\tlist Barang\t\t\t"<<endl<<endl;
	cout<<" beras			: 1 kg 		: Rp. 10000 "<<endl;
	cout<<" gula			: 2 kg 		: Rp. 89000 "<<endl;
	cout<<" nasi uduk		: 1 bungkus\t: Rp. 77000 "<<endl;
	cout<<" ketan			: 2 biji 	: Rp. 34200 "<<endl;
	cout<<" susu			: 1 box 	: Rp. 33000 "<<endl;
	cout<<" buku 			: 1 dus 	: Rp. 45000 "<<endl;
	cout<<endl;
	int beras, gula, nasi_uduk, ketan, susu, buku, hasil;
	cout<<" masukan jumlah beras dan harga : Rp. ";
	cin>>beras;
	cout<<" masukan jumlah gula dan harga : Rp. ";
	cin>>gula;
	hasil = beras + gula;
	cout<<" total pembelian "<< "Rp. "<<beras<<" + "<<" Rp. "<<gula<<" adalah "<<" Rp. "<<hasil<<endl<<endl;
	cout<<" masukan jumlah nasi uduk dan harga : Rp. ";
	cin>>nasi_uduk;
	cout<<" masukan jumlah ketan dan harga : Rp. ";
	cin>>ketan;
	hasil = nasi_uduk + ketan;
	cout<<" total pembelian "<<" Rp. "<<nasi_uduk<<" + "<<" Rp. "<<ketan<<" adalah "<<" Rp. "<<hasil<<endl<<endl;
	cout<<" masukan jumlah susu dan harga : Rp. ";
	cin>>susu;
	cout<<" masukan jumlah buku dan harga : Rp. ";
	cin>>buku;
	hasil = susu + buku;
	cout<<" total pembelian "<<" Rp. "<<susu<<" + "<<" Rp. "<<buku<<" adalah "<<" Rp. "<<hasil<<endl<<endl;
	cout<<"\t\t<=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=>\t\t"<<endl;
	cout<<"\t\tterima kasih anda telah membeli di toko kami \t\t"<<endl;
	cout<<"\t\t<=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=>\t\t"<<endl;
	
}
