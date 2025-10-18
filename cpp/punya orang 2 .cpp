/*tugas 2 coy*/
#include <iostream>
using namespace std;
int main(){

    int x;
    int y;
    cout << "masukkan nilai x ";
    cin >> x;
    cout << "masukkan nilai y ";
    cin >> y;
    int rs = x << 3;
    int ls = y >> 2;
    cout << "hasil geser 3 bit adalah "<<rs<<endl;
    cout << "hasil geser 2 bit adalah " << ls <<endl;
    return 0;
}