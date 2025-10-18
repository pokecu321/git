#include<iostream>
using namespace std;
int main() {
    float panjang, inchi, kaki, yard, menu;
    cout << "Program konversi satuan meter\n";
    cout << "1. meter ke inchi\n";
    cout << "2. meter ke kaki\n";
    cout << "3. meter ke yard\n";
    cout << "4.semua\n";
    cout << "pilih menu (1/2/3/4) : ";
    cin >> menu;
    cout << "masukkan panjang dalam meter : ";
    cin >> panjang;
    inchi = panjang / 0.0254;
    kaki = panjang / 0.3048;
    yard = panjang / 0.9144;
    switch(int(menu)) {
        case 1 :
            cout << panjang << " meter = " << inchi << " inchi";
            break;
        case 2 :
            cout << panjang << " meter = " << kaki << " kaki";
            break;
        case 3 :
            cout << panjang << " meter = " << yard << " yard";
            break;
        case 4 :
            cout << panjang << " meter = " << inchi << " inchi\n";
            cout << panjang << " meter = " << kaki << " kaki\n";
            cout << panjang << " meter = " << yard << " yard\n";
            break;
        default :
            cout << "menu tidak tersedia";
    }
    return 0;
}