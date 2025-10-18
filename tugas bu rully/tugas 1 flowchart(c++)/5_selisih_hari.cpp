#include<iostream>
using namespace std;
int main() {
    int day1, day2, month1, month2, year1, year2,
        total1, total2, sisa, years, months, days, selisih;
    
    cout << "Masukkan tanggal pertama (dd mm yyyy): ";
    cin >> day1 >> month1 >> year1;
    cout << "Masukkan tanggal kedua (dd mm yyyy): ";
    cin >> day2 >> month2 >> year2;
    cout << "Tanggal pertama: " << day1 << "-"
    << month1 << "-" << year1 << endl;
    cout << "Tanggal kedua: " << day2 << "-"
    << month2 << "-" << year2 << endl;

    total1 = year1 * 365 + month1 * 30 + day1;
    total2 = year2 * 365 + month2 * 30 + day2;

    if(total1 > total2) {
        selisih = total1 - total2;
    } else {
        selisih = total2 - total1;
    }

    years = selisih / 365;
    sisa = selisih % 365;
    months = sisa / 30;
    days = sisa % 30;

    cout << "Selisih: " << years << " tahun, "
         << months << " bulan, dan " << days
         <<" hari." << endl;
         
    return 0;
}