#include <iostream>
using namespace std;
int main()
{
  while (true)
  {
    int a, b, tambah, kurang, bagi, kali;
    char menulooping, menu;
    cout << "lanjut(y/n)";
    cin >> menulooping;
    if (menulooping == 'n')
    {
      break;
    }
    else if (menulooping == 'y')
    {
      cout << "Masukkan angka pertama: ";
      cin >> a;
      cout << "Masukkan angka kedua: ";
      cin >> b;
      cout << "Pilih operasi (+, -, *, /): ";
      cin >> menu;
      tambah = a + b;
      kurang = a - b;
      kali = a * b;
      bagi = a / b;
      switch (menu)
      {
      case '+':
        cout << "Hasil: " << tambah << endl;
        break;
      case '-':
        cout << "Hasil: " << kurang << endl;
        break;
      case '*':
        cout << "Hasil: " << kali << endl;
        break;
      case '/':
        if (b != 0)
        {
          cout << "Hasil: " << bagi << endl;
        }
        else
        {
          cout << "Error: Pembagian dengan nol!" << endl;
        }
        break;
      default:
        cout << "Operasi tidak valid!" << endl;
        break;
      }
    }
  }

  return 0;
}