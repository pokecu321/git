#include<iostream>
using namespace std;
struct Mahasiswa {
    string nama;
    int umur;
};
int main(){
Mahasiswa m = {"Elyana", 17};
Mahasiswa *pointer = &m;
cout << (*pointer).nama; // akses melalui pointer
}