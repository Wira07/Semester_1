#include<iostream>
#include<stdio.h>
#include<conio.h>
    using namespace std;
    main(){
    int b;
    float d;
    char h;
    puts("masukan sebuah karakter : ");
    printf("Karakter = ");
    h = getchar();
    getch();
    puts("masukan bilangan bulat : ");
    printf("Bilangan bulat = ");
    scanf("%d",&b);
    puts("masukan bilangan pecahan/desimal  : ");
    printf("Bilangan pecahan = ");
    scanf("%f",&d);
    getch();
    cout<<endl;
    cout<<"<----------------------------------------->";
    printf("\nContoh karakter adalah : %c",h);
    printf("\ncontoh bilangan bulat adalah : %d\n",b);
    printf("contoh bilangan pecahan/desimal adalah : %f",d);
    cout<<endl<<endl;
    return 0;

    }

















/*#include<stdio.h>
#include<conio.h>
    main(){
    int b;
    float d;
    char h;
    printf("masukan sebuah karakter : ");
    h = getchar();
    getch();
    puts("masukan bilangan bulat");
    scanf("%d",&b);
    printf("masukan bilangan pecahan/desimal  = ");
    scanf("%f",&d);
    getch();
    printf("\ncontoh bilangan bulat adalah %d\n",b);
    printf("contoh bilangan pecahan/desimal adalah %3.2f\n",h);
    return 0;

    }
*/
