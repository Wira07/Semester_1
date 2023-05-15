#include <iostream>
using namespace std;

int main()
{
    int i, n, jum;
    cout << " masukan bilangan bulat (n) " << endl;
    cin>>n;
    jum = 0;
    for ( i = 1; i <= n; i++){
        jum = jum + i;
        cout<<" "<<jum;
    }
    cout<<" ==> jumlah = " <<jum <<endl;
}
