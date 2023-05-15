#include <iostream>
using namespace std;
int fibonacci (int n){
	if(n == 0){
		return 0;
	}else if (n == 1){
		return 1;
	}else{
	return fibonacci (n - 1) + fibonacci (n - 2);
	}
}
int main (){
	int x;
    cout<<"\n Masukan Akhir bulan  : ";
    cin>>x;
    
    for ( int i=1; i <= x; i++){
    	cout<<" "<<fibonacci(i);
	}
	cout<<endl;
	cout<<" Jumlah Pasangan Kelinci pada bulan ke "<<x<< " adalah : "<<fibonacci(x)<<" pasang "; 
}
