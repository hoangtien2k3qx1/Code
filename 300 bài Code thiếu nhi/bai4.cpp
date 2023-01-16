
#include<bits/stdc++.h>
using namespace std;

double Area_Triangle(int a, int b, int c) {
    float p;
    double ans; 
    if (a + b > c && a + c > b && b + c > a) {
        if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
            cout << "Tam giac vuong !" << endl;
        } else if (a == b == c) {
            cout << "Tam giac deu !" << endl;
        } else if (a == b || b == c || c == a) {
            cout << "Tam giac can !" << endl;
        } else if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b) {
            cout << "Tam giac tu!" << endl;
        } else {
            cout << "Tam giac thuong!" << endl;
        }
        p = (a + b + c) / 2;
        ans = sqrt(p*(p-a)*(p-b)*(p-c));
    } else {
        cout << "Khong phai tam giac!" << endl;
    }
    return ans;
}

int main() {
    int a, b, c;
    cout << "Nhap vao a, b, c: ";
    cin >> a >> b >> c;
    cout << "Dien Tich: " << Area_Triangle(a, b, c) << endl;
    return 0;
}