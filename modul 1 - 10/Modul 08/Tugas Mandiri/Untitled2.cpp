#include <iostream>
using namespace std;
int start (int a, int b, float m, float n){
	if ( a == b && m == n){
		cout<<" kedua integer nilainya sama dan kedua float sama : ";
	}else if ( a == b && m != n ){
		cout<<" kedua integer nilainya sama dan kedua floatnya tidak sama : ";
	}else if ( a != b && m == n ){
		cout<<" kedua integer nilainya tidak sama dan kedua floatnya sama : ";
	}else {
		cout<<" kedua integernya tidak sama dan kedua floatnya tidak sama : ";
	}
}
int main(){
	int a,b;
	float m,n;
	
	cout<<" masukan nilai a(int) : ";
	cin>>a;
	cout<<" masukan nilai b(int) : ";
	cin>>b;
	cout<<" masukan nilai m(float) : ";
	cin>>m;
	cout<<" masukan nilai n(float) : ";
	cin>>n;
	
	start(a,b,m,n);
}
