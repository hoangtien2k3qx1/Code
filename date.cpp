
// users setClock \11\21\2000

#include <iostream>
using namespace std;

int Year2022 (int date, int month, int year) {
    char c = 92;
    cout << "users setClock " << c << month << c << date << c << year;
    return 0;
}

int main() {
    int date, month, year;
    cout << " nhap vao date = ";
    cin >> date;
    cout << "nhap vao month = ";
    cin >> month;
    cout << "nhap vao year = ";
    cin >> year;
    Year2022 (date, month, year);
    return 0;
}