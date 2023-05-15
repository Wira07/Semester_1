#include <iostream>
#include <conio.h>
using namespace std;
main(){
	//VARIABEL
	int bil, cek, pilih, ulang, ulang2;
	//PROGRAM
	ulang:
	cout <<"\n MENENTUKAN BILANGAN PRIMA ATAU BUKAN "<<endl;
	cout <<"#=====================================#\n ";
	cout <<" Masukan Bilangan : "; cin >> bil;
	//PROSES
	cek = 1;
	for (int i = 2; i < bil; i++){
	if (bil % i == 0)
		cek = 0;
	}if (cek){
		cout <<" "<< bil <<" Adalah Bilangan Prima "<<endl;
	}else{
		cout <<" "<< bil <<" Bukan Bilangan Prima "<<endl;
	}
}
	//PEMILIHAN
	/*ulang2:
	cout << endl ;
	cout <<" Coba Lagi [1]\n ";
	cout <<" Keluar [2]\n ";
	cout <<" Pilih : ";
	cin >> pilih ;
	if (pilih == 1){
		goto ulang;
	}else if (pilih == 2){
		cout <<" ||============================================||\n";
		cout <<" || Terima Kasih Telah Menggunakan Program Ini ||\n";
		cout <<" ||============================================||\n";
	}else {
		cout <<" ||==================================||\n";
		cout <<" || Pilihan Yang Anda Masukan Salah! ||\n";
		cout <<" ||==================================||\n";
		goto ulang2;
	}getch();
return 0;
}



/*#include <iostream>

using namespace std;

int main() {
int n;
cout<<"Masukkan bilangan yang akan di Cek: "<<endl;
cin>>n;
int prima = 1;
for(int i=2; i<n; i++) {
if(n%i==0)
prima=0;
}
if (prima) {
cout<<n<<" Adalah bilangan prima"<<endl;
}
else {
cout<<n<<" Bukan bilangan prima"<<endl;
}
	
return 0;
}
*/
