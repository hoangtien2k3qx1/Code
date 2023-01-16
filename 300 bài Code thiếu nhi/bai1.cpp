
#include<iostream>
#include<cmath>
using namespace std;
#define pi 3.141593

double Volume(double s) {
    double ans = sqrt(s/(4*pi));
    double result = (4*pi/3) * pow(ans, 3);
    return result;
}

int main() {
    double s; // dien tich mat cau
    cout << "Enter Area Globular(dien tich hinh cau): ";
    cin >> s;
    cout << "Answer:" << Volume(s) << endl;
    return 0;
}
