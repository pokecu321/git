#include <iostream>
using namespace std;
int main() {
    int x, y, z ,a;
    cout << "masukkan 3 nilai : ";
    cin >> x >> y >> z;
    cout << "nilai awal : " << x << " " << y << " " << z << endl;
    a = x;
    x = y;
    y = z;
    z = a;
    cout << "nilai akhir : " << x << " " << y << " " << z << endl;
    return 0;
}