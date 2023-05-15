#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, n;
    cout << " masukan bilangan bulat (n) : " << endl;
    cin>>n;
    for ( i = 1; i <= n; i++){
    cout<<setw(i) <<'@'<<endl;
    return 0;
    }
}
