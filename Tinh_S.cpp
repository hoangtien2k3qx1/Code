//                       Tính S = x + x^2/2! + ... + x^n/n!
// n : là số nguyên
// x : la số thực

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double gt(int n)
{
    if (n == 1)
        return 1;
    return n * gt(n - 1);
}
int main()
{
    int n;
    double x;
    cout << "nhap vao n = ";
    cin >> n;
    cout << "nhap vao x = ";
    cin >> x;
    double S = 0;
    for (int i = 1; i <= n; i++)
    {
        S += (pow(x, i) / gt(i)); // gt(i) vì mỗi lần vòng "for" chạy thì gt(i) nó sẽ gán index vào (thay vì là n);
    }
    cout << fixed << setprecision(2) << "Tong = " << S;
    return 0;
}

/*
double Sum(int n, double x) {
    double T=1, P=1, S = 0;
    for (int i=1; i<=n; i++) {
        T = T * x; // T = pow(x,i);
        P = P * i;
        S = S + T/P;
    }
    return S;
}
int main() {
    int n;
    double x;
    double T=1, P=1, S = 0;
    cout << "nhap vao n = "
    cin >> n;
    cout << "nhap vao x = ";
    cin >> x;
    cout << fixed << setprecision(2) << Sum(n,x);
    return 0;
}
*/