
#include<bits/stdc++.h>
using namespace std;

void Answer(float xC, float yC, float R, float xM, float yM) {
    double result = sqrt(pow((xM - xC), 2) + pow((yM - yC), 2));
    if (result > R) {
        cout << "Diem M(xM, yM) nam ngoai duong tron!" << endl;
    } else if (result == R) {
        cout << "Diem M(xM, yM) nam tren duong tron!" << endl;
    } else {
        cout << "Diem M(xM, yM) nam trong duong tron!" << endl;
    }
}

int main() {
    float xC, yC, R, xM, yM;
    cout << "Nhap vao toa do tam duong tron C(xC, yC): ";
    cin >> xC >> yC;
    cout << "Nhap vao R: ";
    cin >> R;
    cout << "Nhap vao toa do diem M(xM, yM): ";
    cin >> xM >> yM;

    Answer(xC, yC, R, xM, yM);

    return 0;
}