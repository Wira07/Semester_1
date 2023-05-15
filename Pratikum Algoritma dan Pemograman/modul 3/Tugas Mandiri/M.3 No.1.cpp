#include <iostream>
using namespace std;

int main(){
	//penempatan tipe data
	int a,b,c,d,x,n,v;
	
	//pendeklarasian variabel
	cout<<" masukan nilai a : ";
	cin>>a;
	cout<<" masukan nilai b : ";
	cin>>b;
	//proses
	x = a + b;
	cout<<" hasil dari a + b : "<<x;
	cout<<endl<<endl;
	
	cout<<" masukan nilai c : ";
	cin>>c;
	cout<<" masukan nilai d : ";
	cin>>d;
	n = c + d;
	cout<<" hasil dari a + b : "<<n;
	cout<<endl<<endl;
	v = (a + b) / (c + d);
	cout<<" hasil dari (a + b) : (c + d) "<<" adalah "<<v;
	
}
