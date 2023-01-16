// Tìm bội chung nhỏ nhất của 2 số a và b
// Bội chung nhopr nhất của hai số a và b là như thế nào;

/* 
    Trong số học, bội số chung nhỏ nhất : ( least common multiple hoặc lowest common multiple (LCM) );
    của hai số nguyên a và b là số nguyên dương nhỏ nhất chia hết cho cả a và b.
*/

#include<iostream>

using namespace std;

int New (int n) {
    for (int i=0; i<=n; i++) {
        if (n % 2 == 0) {
            cout << "YES";
        } else {
            cou << "NO";
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    New (n);
    return 0;
}