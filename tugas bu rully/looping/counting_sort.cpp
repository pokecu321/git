/*

    nama : Muhammad saifuddin
    absen : 15
    kelas : X PPLG 2
    judul : counting sort
    kelompok : 7

*/

#include <iostream>
using namespace std;
int main(){

    int n;

    cout << "masukkan jumlah array : " ;
    cin >> n;
    int arr[n];

    cout << "masukkan elemen array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "masukkan arr["<< i << "] = ";
        cin >> arr[i];
    }

    cout << endl;

    cout << "array sebelum di sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n-1)
        {
            cout << ", ";
        }
        else
        {
            cout << "";
        }
        
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "arr["<< i << "] = " << arr[i] << endl;
    }

    cout << endl;

    int nilaimaksimal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > nilaimaksimal)
        {
            nilaimaksimal = arr[i];
        }
        
    }
       
    int count[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    
    int index = 0;
    for (int i = 0; i <= nilaimaksimal; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            arr[index]=i;
            index++;
        }

    }

    cout << "array setelah di sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n-1)
        {
            cout << ", ";
        }
        else
        {
            cout << "";
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "arr["<< i << "] = " << arr[i] << endl;
    }
    
    return 0;

}