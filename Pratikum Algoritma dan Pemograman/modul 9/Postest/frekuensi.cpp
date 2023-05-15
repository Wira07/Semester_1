#include <iostream>
using namespace std;
int main()
{
    int n, jumlah;
    float mean, d = 0;
    cout<<" Berapa banyak data ke -n : ";
    cin>>n;
    float input[n];

    //Penginputan data
    for(int i = 0; i < n; i++) {
        cout<<"Masukkan data ke - "<<i+1<<" : ";
        cin>>input[i];
        d += input[i];
    }

    cout << "\nBanyak kemunculan data : " << endl;

    //Proses menghitung periode kemunculan
    for(int i=0; i<n; i++)
    {
        jumlah = 0;
        for(int j=0; j<n; j++)
        {
            if(input[i] == input[j])
                jumlah++;
        }
//mengabaikan program angka sebelumnya yang sudah ditampilkan
        if(input[i] != input[i-1])
            cout << input[i] << " : " << jumlah <<endl;
    }
    mean = d / n;

    cout<<"Nilai rata-ratanya ialah : "<<mean;


}
