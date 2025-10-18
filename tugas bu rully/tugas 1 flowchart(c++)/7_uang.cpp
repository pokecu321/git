#include<iostream>
using namespace std;
int main() {
    int rp1000, rp500, rp100, 
    rp50, rp25, sisa, nilaiuang;
    cout << "masukkan nilai uang : ";
    cin >> nilaiuang;
    rp1000 = nilaiuang / 1000;
    sisa = nilaiuang % 1000;
    rp500 = sisa / 500;
    sisa = sisa % 500;
    rp100 = sisa / 100;
    sisa = sisa % 100;
    rp50 = sisa / 50;
    sisa = sisa % 50;
    rp25 = sisa / 25;
    cout << "uang senilai " << nilaiuang 
         << " setara dengan " << rp1000 
         << " buah pecahan rp1000 ditambah " 
         << rp500 << " buah pecahan rp500 ditambah " 
         << rp100 << " buah pecahan rp100 ditambah " 
         << rp50 << " buah pecahan rp50 ditambah " 
         << rp25 << " buah pecahan rp25 ";
    return 0;
}