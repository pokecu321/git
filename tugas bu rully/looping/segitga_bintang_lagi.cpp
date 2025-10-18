#include <iostream>
using namespace std;
int main() {
    int n,segitiga,i,ii,iii,space;
    cout << "masukkan jumlah sisi : ";
    cin >> n;
    cout << "masukkan segitiga : ";
    cin >> segitiga;
    for (i = 1; i <= n; i++)
    {
        for (ii = 1; ii <= segitiga; ii++)
        {
            for (iii = 1; iii <= i; iii++)
            {
                if (i==n || iii == 1 || iii == i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                
                
            }
            for ( space = n - i ;space >= 1; space--)
            {
                cout << " ";
            }
            
            
        }
        cout << endl;
    }
    return 0;
}