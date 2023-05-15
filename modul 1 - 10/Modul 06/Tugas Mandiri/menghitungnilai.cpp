#include <iostream>
using namespace std;
int main(){
    int e[100], g[100], y, f, modus, total=0, jumlah;
    int rata;
    cout <<"\n Jumlah Nilai Yang Dimasukan : ";
    cin  >> jumlah;
    cout <<" -----------------------------\n";
    for (y = 0; y < jumlah; y++){
        cout <<" Masukan Nilai Ke - ["<< (y+1) <<"] : " ;
        cin  >> e[y];
        total +=e[y];
    }
    // Menentukan Modus
    for (y = 0; y < jumlah; y++){
        modus = 0;
        for (f = 0; f < jumlah; f++)
            if (e[f] == e[y]){
                modus ++;
                g[y] = modus;
            }
    }

    cout <<"\n Frekuansi Nilai Yang Dimasukan Adalah : \n";
    for (y = 0; y < jumlah; y++){
        if (y > 0){
            for (f = 0; f < y; f++)
                if (e[y] == e[f] && g[y] == g[f])
        
      cout <<"Nilai"<< e[y] <<" = "<< g[y] <<" Siswa "<< endl;
    }
}
   
    rata = total / jumlah;
    cout <<"\n Nilai rata rata = "<< rata << endl;

    cin.get();
    return 0;
}

/*
{   
*/








































/*int main(){
    int n;
    cout <<" Masukan Banyak Nilai :";
    cin  >> n;

    float number[n];
    for (int i = 0; i < n; i++){
        cout <<" Masukan Nilai Ke "<< i <<" : ";
        cin  >> number[i];
    }
    int kesamaan[n];
    for (int i = 0; i < n; i++){
        kesamaan[i] = 0;
    }
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
            if (number[i] == number[j]) kesamaan[i]++;
        }
    }
    int modus = 0;
    for (int i = 0; i < n; i++){
        modus = (modus > kesamaan[i]) ? modus : kesamaan[i];
    }
    for (int i = 0; i < n; i++){
        if (kesamaan[i] == modus)
             cout <<" Modus dari Nilai Adalah "<< number[i] << endl;
        }
       
    return 0;
}
*/