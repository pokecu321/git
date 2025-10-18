#include <iostream>
using namespace std;
int main (){
    int i,n;
    cout << "masukkan angka awal : ";
    cin >> n;
    cout << "masukkan angka akhir : ";
    cin >> i;
    cout << "hasil"<< endl;
    if (n < i){
        for(i ; i <= n; i++)
        {
            cout << i << endl;
        }
    }
    else {
        for( n ; n <= i; n++)
        {
            cout << n;
        }
        
    }
    cout << "selesai";
    return 0;
}