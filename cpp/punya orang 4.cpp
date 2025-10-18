/*tugas 4*/
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "masukkan nilai a : ";
    cin >> a;
    cout << "masukkan nilai b : ";
    cin >> b;
    cout << "masukkan nilai c : ";
    cin >> c;
    int d = (a*b)-c/(b+a);
    cout << "nilai dari d = (a*b)-c/(b+a) = " << d<< endl;
    int dls = d << 2;
    cout << "hasil dari geser 2 bit ke kiri = " << dls<< endl;
    // baris ke 2
    cout <<endl;
    int j,k,l;
    cout << "masukkan nilai j : ";
    cin >> j;
    cout << "masukkan nilai k : ";
    cin >> k;
    cout << "masukkan nilai l : ";
    cin >> l;   
    int m = j*(k+l);
    cout << "hasil dari m = j*(k+l) = "<< m << endl;
    int mrs = m >> 3;
    cout << "hasil dari geser 3 bit ke kanan = " << mrs << endl;
    // baris 3
    if(dls != mrs){
        cout << dls << " tidak sama dengan " << mrs<< endl;
    }
    else
    {
        cout << dls << " sama dengan " << mrs<<endl;
    }

    if (dls > mrs)
    {
        cout << dls << " lebih besar dari " << mrs<<endl;
    }
    else if (dls < mrs)
    {
        cout << dls << " lebih kecil dari " << mrs<<endl;
    }
      
}
