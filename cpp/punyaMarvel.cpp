#include <iostream>

using namespace std;

int main()
{
    int hari;
    int jam ;
    int menit;
    int nilaidetik;
    int sisanilaidetik;
    cout << "mengonversikan detik ke menit jam hari" << endl;
    cout <<"masukkan nilai detik : ";
    cin>>nilaidetik;
    hari = nilaidetik / 86400;
    sisanilaidetik = nilaidetik % 86400;
    jam = sisanilaidetik / 3600;
    sisanilaidetik = sisanilaidetik % 3600;
    menit = sisanilaidetik / 60;
    sisanilaidetik = sisanilaidetik % 60;
    cout <<"hasilnya : "<<hari<<" hari "<<jam<<" jam "<<menit<<" menit "<<sisanilaidetik<<" detik ";
    return 0;
}