#include <iostream>
#include <cmath>
using namespace std;


int main (){
	
	float bilangan, pangkat, hasil, hasil2;
	/*inilah rumus dari bilangan akar dan pangkat */
	cout<< " masukan bilangan : ";
	cin>>bilangan;
	
	/*rumus pangkat*/
	cout<<" masukan pangkat : ";
	cin>>pangkat;
	
	hasil = pow(bilangan, pangkat);
	cout<<" hasil dari "<<bilangan<<"^"<<pangkat<<" adalah : "<<hasil<<endl;
	/*rumus akar*/
	hasil2 = sqrt(hasil);
	cout<<"\nhasil dari akar "<<hasil<< " adalah " << hasil2 <<endl;
	return 0;
}
