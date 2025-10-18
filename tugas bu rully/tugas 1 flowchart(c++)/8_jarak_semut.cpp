#include<iostream>
using namespace std;
int main() {
    int cm, m, km, cmsisa, sisa;
    cout << "Program konversi jarak semut\n";
    cout << "masukkan jarak dalam cm : ";
    cin >> cm;
    cout <<"seekor semut menempuh perjalan sejauh : " 
    << cm << " cm";
    km = cm / 100000;
    sisa = cm % 100000;
    m = sisa / 100;
    cmsisa = sisa % 100;
    cout << "\nsetara dengan " << km << " km, " 
         << m << " m, dan " << cmsisa << " cm";
    return 0;
}