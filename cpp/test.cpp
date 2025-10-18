#include <iostream>
#include <string>

using namespace std;
int main() {
    string nama ;
    string password ;
    string lanjut ;
    cout << "halaman login" << "\n";
    cout << "ketik untuk lanjut";
    getline(cin, lanjut);
    cout << "masukkan Id user : ";
    getline(cin, nama);
    cout << "masukkan password anda : ";
    getline(cin, password);
    cout << "berhasil";

    return 0;
}