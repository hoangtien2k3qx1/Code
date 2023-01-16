
//  VD:    a^b = ? tính bằng đệ quy

#include<iostream>
using namespace std;

int LuyThua (int a, int b) {
    if (b == 0) return 1;
    if (b % 2 == 0) return LuyThua(a, b / 2) * LuyThua(a, b / 2);
    else return a * LuyThua(a, b / 2) * LuyThua(a, b / 2);
}

int main() {
    int a,b;
    cout << "nhap vao a = ";
    cin >> a;
    cout << "nhap vao b = ";
    cin >> b;
    cout << LuyThua(a,b);
    return 0;
}