#include<iostream>
using namespace std;
int main() {
    int hari;
    cout << "Masukkan jumlah hari: ";
    cin >> hari;
    int bulan, tahun, sisa_hari , sisa;
    tahun = hari / 365;
    sisa = hari % 365;
    bulan = sisa / 30;
    sisa_hari = sisa % 30;
    cout << hari << " hari adalah " << tahun << " tahun, " << bulan << " bulan, dan " << sisa_hari << " hari." << endl;

    return 0;
}