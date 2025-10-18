#include <iostream>
using namespace std;
int main () {
    char type;
    int num1, num2 ;
    cout << "enter first number : " ;
    cin >> num1 ;
    cout << "enter operator +,-,*,/ : " ;
    cin >> type ;
    cout << "enter second number : ";
    cin >> num2 ;
    cout << "hasil : ";
    int hasilpertambahan;
    hasilpertambahan = (num1 + num2);
    int hasilpengurangan;
    hasilpengurangan = (num1 - num2);
    int hasilKali;
    hasilKali = ( num1 * num2 ) ;
    int bagi;
    bagi = (num1 / num2) ;
    switch (type)
    {
    case '+':
        cout << hasilpertambahan;
        break;
    
    case '-':
        cout << hasilpengurangan;
        break;

    case '*':
        cout << hasilKali;
        break;

    case '/':
        cout << bagi;
        break;

    default:
        cout << "wrongggggg";
        break;
    }
    
    return 0;
}