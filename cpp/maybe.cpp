#include <iostream>
using namespace std;
int main() {
    int n,m=2;
    cout << "masukkan panjang bintang : ";
    cin >> n;
    for(int i = 1;i <= n;i++){
        for (int k = 1; k <= m; k++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<"* ";
            }
            for(int j = n;j>1;j--){
                cout<< "_ ";
            }
        }
        cout <<endl;
    }
    return 0;
}