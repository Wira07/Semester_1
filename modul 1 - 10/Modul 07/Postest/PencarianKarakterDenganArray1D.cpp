#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	cout <<"\n * PENCARIAN KARAKTER DENGAN ARRAY D 1 * "<< endl;
	cout <<" |======================================| \n"<< endl;
	show:
	string Dt[28]={"G","U","Y","K","W","Q","T","E","Z","\n S",
	"A","D","C","J","L","P","I","B","\n F","H","M","R","N","O","V","X"};
	string dtCari;
	int hasilCari=0, ulang;
	for(int a = 0; a < 26; a++){
		cout <<" "<< Dt[a]<<"," ;
	}	
	cout << endl <<"\n Cari : ";
	cin  >> dtCari;
	for(int b = 0; b < 26; b++){
		if(dtCari == Dt[b]){
			hasilCari=1;
			cout <<" Karakter ["<< dtCari <<"] Ditemukan"<< endl;
			break;
		}
	}
	if(hasilCari == 0){
		cout <<" Karakter ["<< dtCari <<"] Tidak Ditemukan "<< endl;
	}
	cout <<"\n Mau Coba Lagi ? [y/n] : ";
	ulang = getch();
	if(ulang == 'y'){
		cout <<"\n";
		goto show;
	}if(ulang == 'n'){
		cout <<" T E R I M A K A S I H "<< endl;
	} 
	cin.get();
	return 0;
}
/*
Dt[0]="G"; Dt[1]="U"; Dt[2]="Y"; Dt[3]="K"; Dt[4]="W"; Dt[5]="Q"; Dt[6]="T"; Dt[7]="E"; Dt[8]="Z"; 
	Dt[9]="\n S"; Dt[10]="A"; Dt[11]="D"; Dt[12]="C"; Dt[13]="J"; Dt[14]="L"; Dt[15]="P"; Dt[16]="I"; Dt[17]="B";
	Dt[18]="\n F"; Dt[19]="H"; Dt[20]="M"; Dt[21]="R"; Dt[22]="N"; Dt[23]="O"; Dt[24]="V"; Dt[25]="X";
*/