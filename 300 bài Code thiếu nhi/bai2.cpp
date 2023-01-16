
#include<bits/stdc++.h>
using namespace std;

double kq(float xA, float xB, float yA, float yB) {
    double ans = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    return ans;
}

int main() {
    float xA, xB, yA, yB;
    cout << "Nhap vao tao do: xA, xB, yA, yB: ";
    cin >> xA, xB, yA, yB;
    cout << "Ans: " << kq(xA, xB, yA, yB) << endl;
    return 0;
}