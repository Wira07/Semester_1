#include <stdio.h>
#include <iostream>
#include <conio.h>
void print_array (int a[2][3]){
    int i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++)
            printf("%2d", a[i][j]);
        printf("\n");
    }
}
int main(){
    system("cls");
    int arr[2][3], i, j;
    printf("| Array Fungction Untuk Transformasi Matrik |\n");
    printf("+-------------------------------------------+\n");
    printf("\nKetik 6 Bilangan : \n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
            }
    }print_array(arr);
    getch();
    return 0;
}