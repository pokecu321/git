#include<iostream>
using namespace std;
int main (){
    int n;
    int temp;
    cout << "masukkan ukuran array : ";
    cin >> n;
    int arr[n];
    cout << "---===input nilai array===---"
        <<endl;
    for (int i = 0; i < n; i++)
    {
        cout << "masukkan nilai arr["<<i
            <<"] = ";
        cin >> arr[i];
    }
    cout << "array sebelum di sorting ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n-1)
        {
            cout << ", ";
        }
        else{
            cout << "";
        }
    }
    //sorting
    for (int i = 0; i < n-1; i++)
    {
        int berhenti = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
            }
        }
    }
    cout << endl;
    cout << "setelah sorting adalah : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if(i < n-1){
            cout << ", ";
        }
        
    }
    
    


















}