#include <iostream>
using namespace std;

int main(){
	int A[] = {10,8,3,5,4};
	int temp;
	
	for (int j=0; j<5; j++)
		cout<<A[j]<<" ";
		cout<<" "<<endl;
	for (int i=0; i<4; i++){
		for(int k = (i+1); k<5; k++)
			if (A[i]>A[k]){
				temp = A[i];
				A[i] = A[k];
				A[k] = temp;
			}
		}
		for(int n=0; n<5; n++)
			cout<<A[n]<<" ";
}
