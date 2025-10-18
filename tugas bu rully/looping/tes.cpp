#include <iostream> 
using namespace std;
int main (){

    int sisi, sgt, i, ii, iii, sp;
    cout << "masukkan jumlah bintang per sisi: ";
    cin >> sisi;
    cout << "masukkan jumlah segitiga: ";
    cin >> sgt;

    for (i=1 ; i<=sisi ; i++) 
    {
        for (ii=1 ; ii<=sgt ; ii++)
        {
            for (iii=1 ; iii<=i ; iii++) 
            {
                if (i==sisi || iii==1 || iii==i)
                {
                    cout << "*";
                }
                else
                {
                        cout << " ";
                }
            }

            for (sp=sisi-i ; sp>=1 ; sp--)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}