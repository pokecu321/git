#include <iostream>
using namespace std;
int main() {
    char type;
    double a, b;
    cout << "Masukkan angka a dan b" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "lanjutkan operasi? (y/n): ";
    cin >> type;
    switch (type)
    {
    case 'y':
    while (a <= b)
    {
        cout << a << endl;
        a++;
    }
    cout << "operasi selesai" << endl;
        break;
    
    case 'n':
        cout << "operasi dihentikan";
        break;
    default:
        cout << "Pilihan tidak valid" << endl;
        break;
    }

    cout << "Program selesai" << endl;
    cout << "Terima kasih telah menggunakan program ini" << endl;

    return 0;
}