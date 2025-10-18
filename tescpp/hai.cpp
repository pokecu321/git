#include<iostream>
using namespace std;
int main(){
	int n,k;
	cout << "masukkan panjang segitiga : ";
	cin >> n;
	cout << "banyak segitiga : ";
	cin >> k;
	for(int i = 1;i <= n;i++){
		for(int h = 1;h <= k;h++){
			for(int j = 1;j<= i;j++){
				cout << "* ";
			}
			for(int j = n;j > i;j--){
				cout << "  ";
			}
		}
		cout <<endl;
	}
}
