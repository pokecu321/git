#include<iostream>
using namespace std;
int main() {
    const float phi = 3.14;
    int jariJari;
    char pilihan;
    double luasLingkaran;
    double kelilingLingkaran;
    cout << "pilih\n 1. Luas Lingkaran\n 2. Keliling Lingkaran\n";
    cin >> pilihan;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
    luasLingkaran = phi * (jariJari * jariJari);
    kelilingLingkaran = 2 * phi * jariJari ;
    switch (pilihan)
    {
    case '1':
        cout << "Luas Lingkaran: " << luasLingkaran << endl;
        break;
    case '2':
        cout << "Keliling Lingkaran: " << kelilingLingkaran << endl;
        break;
    default:
    cout << "Pilihan tidak valid." << endl;
        break;
    }
    return 0;
}