#include <stdio.h>
void print_array (int a[][3]) {
	int i, j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++)
			printf ("%2d",a[i][j]);
			printf ("\n");	
	}
}
	int main(){
		int arr[2][3], i, j;
		printf ("Ketik 6 Bilangan : \n");
		for(i = 0; i < 2; i++)
			for(j = 0; j < 3; j++)
				scanf("%d", &arr[i][j]);
			printf ("\n");
			print_array(arr);
	return 0;
}
