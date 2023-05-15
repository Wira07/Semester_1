#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int huruf [1][15][15] = {
	{	{ 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
		{ 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1},
		{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{ 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
		{ 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0},
		{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0}
	},
};
	cout<<endl;
	cout<<" |-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-| \n";
	cout<<" |Program 3 dimensi dalam bentuk benda X\n";
	cout<<" |-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-| \n";
	int i, j, k;
	for (int i = 0; i < 1; i++){
		for (int j = 0; j < 7; j++){
			for (int k = 0; k < 15; k++)
			if (huruf [i][j][k] == 1){
				cout<< '\xBD';
			}else
				cout<< '\x20';
			cout<<endl;
		} 
		cin.get();
	return 0;
	}
}
