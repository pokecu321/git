#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "masukkan 3 var " ;
    cin >> a >>b>>c;
    cout << "nilai awal"<< endl
        << "a = " << a << endl
        << "b = " << b <<  endl
        << "c = " << c << endl;
    if (a <= b && a <= c && b <= c)
    {
        cout << a << b << c;
    }
    else if(b <= a && b <= c && a <= c){
        cout << b << a << c;
    }
    else if (c <= a && c <= b && a <= b)
    {
        cout << c << a << b;
    }
    else if (a <= b && a <= c && c <= b)
    {
        cout << a << c << b;
    }
    else if (b <= a && b <= c && c <= a)
    {
        cout << b<< c<<a;
    }
    else
    {
        cout << c << b<< a;
    }
    return 0; 
}