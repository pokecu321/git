#include<iostream>
using namespace std;
int main() {
    float tinggi, selisih, potongan, bmi;
    cout << "Program menghitung berat badan ideal\n";
    cout << "masukkan tinggi badan (cm) : ";
    cin >> tinggi;
    selisih = tinggi - 100;
    potongan = selisih * 0.1;
    bmi = selisih - potongan;
    cout << "tinggi badan anda " << tinggi << " cm\n";
    cout << "selisih = " << selisih << " cm\n";
    cout << "potongan = " << potongan << " kg\n";
    cout << "berat badan ideal anda adalah " << bmi << " kg";
    return 0;
}
