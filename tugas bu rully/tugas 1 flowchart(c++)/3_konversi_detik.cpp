#include <iostream>
using namespace std;
int main() {
    int Detik;
    int menu;
    cout << "Pilih konversi\n"
         << "1. Menit\n"
         << "2. Jam\n"
         << "3. Hari\n"
         << "4.semua\n";
    cout << "Masukkan pilihan (1-4): ";
    cin >> menu;
    cout << "Masukkan jumlah detik: ";
    cin >> Detik;
    int hari, sisajam, sisamenit, sisa, detikakhir, jam, menit;
    hari = Detik / 86400;
    jam = Detik / 3600;
    menit = Detik / 60;
    sisa = Detik % 86400;
    sisajam = sisa / 3600;
    sisa = sisa % 3600;
    sisamenit = sisa / 60;
    detikakhir = sisa % 60;
    switch (menu) {
        case 1:
            cout << Detik << " detik = " << menit << " menit" << endl;
            break;
        case 2:
            cout << Detik << " detik = " << jam << " jam" << endl;
            break;
        case 3:
            cout << Detik << " detik = " << hari << " hari" << endl;
            break;
        case 4:
            cout << Detik << " detik = " << hari << " hari, " << sisajam
                 << " jam, " << sisamenit << " menit, " << detikakhir
                 << " detik" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }
    return 0;
}