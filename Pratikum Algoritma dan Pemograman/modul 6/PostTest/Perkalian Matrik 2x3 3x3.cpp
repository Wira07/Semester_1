#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i,j;
	int a[2][3],b[3][3],c[3][3];
	cout<<"Data matriks A \n"; for (i=0;i<2;i++){
	for (j=0;j<3;j++)
	{	
	cout<<"["<<i<<"]["<<j<<"] : ";
	cin>>a[i][j];
	}
	}
	cout<<"Data matriks B \n";
	for (i=0;i<3;i++){
	for (j=0;j<3;j++){
	cout<<"["<<i<<"]["<<j<<"] : ";
	cin>>b[i][j];
	}	
	}
	cout<<"\nHASIL : "<<endl;
	for(i=0;i<3;i++){
	for (j=0;j<3;j++){
	c[i][j]=a[i][j] * b[i][j]; cout<<c[i][j]<<" ";
}
	cout<<endl;
}
getch();
}
