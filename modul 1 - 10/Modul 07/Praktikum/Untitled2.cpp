#include <iostream>
using namespace std;

int main(){
	int bil, temp;
	int A[bil];
	
	cout<<"Masukan Jumlah Bilangan : ";
	cin>>bil;
	cout<<endl;
	for (int j = 0; j < bil; j++){
		cout<<"masukan bilangan ke-"<<(j+1)<<" : ";
		cin>>A[j];
	}
	cout<<endl;
	for (int i = 0; i < bil; i++){
		for (int k = 0; k < bil; k++)
			if (A[i] > A[k]){
				temp = A[i];
				A[i] = A[k];
				A[k] = temp;
			}
		}
		for (int i = 0; i < bil; i++)
			cout<<A[i]<<" ";
}
