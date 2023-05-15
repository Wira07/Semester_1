#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, jumlah, tmp;
   	cout<<" masukan data ke n : ";
   	cin>>n;
   	int kumpulanData[n];
   	for ( int i = 0; i <= n; i++){
   		cout<<"Masukan data ke - "<<i+1<<" : ";
   		cin>>kumpulanData[i];
	   }
    
    /* Mengurutkan data secara urutan naik (1,1,3,...) */
    for(int h=0; h<=n; h++)
    {
        for(int i=h+1; i<=n; i++)
        {	
            if(kumpulanData[h] > kumpulanData[i])
            {
                tmp = kumpulanData[i];
                kumpulanData[i] = kumpulanData[h];
                kumpulanData[h] = tmp;
            }
        }
        cout << kumpulanData[h] << " ";
    }
    
    cout << "\nBanyak kemunculan data : " << endl;
    
    /* Proses menghitung periode kemunculan */
    for(int h=0; h<=n; h++)
    {
        jumlah = 0;
        for(int i=0; i<=n; i++)
        {
            if(kumpulanData[h] == kumpulanData[i])
                jumlah++;
        }
        
        /* Menghindari program menampilkan angka yang sudah
        di tampilkan ke layar sebelumnya */
        if(kumpulanData[h] != kumpulanData[h-1])
            cout << kumpulanData[h] << " : " << jumlah <<endl;
    }
    
    getch();   
}



