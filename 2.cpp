
//  S = 1 - 2 + 3 - ... + (3n + 1) -> nếu n chẵn
//  S = 1 - 2 + 3 - ... - (3n - 1) -> nếu n lẻ


#include <iostream>
using namespace std;

int tinhToan(int n)
{
    int s;
    int sum1 = 0; // lẻ
    int sum2 = 0; // chẵn
    // for (int i = 1; i <= (3*n + 1); i += 2)
    // { 
    //     sum1 = sum1 + i; // sum = 1;
    // }
    // for (int i = 2; i < (3*n + 1); i += 2)
    // {
    //     sum2 = sum2 - i; // sum = -2
    // }


    for (int i = 1; i <= (3*n + 1); i++) {
        if (i % 2 != 0) {
            sum1 = sum1 + i;
        } 
        if (i % 2 == 0) {
            sum2 = sum2 - i;
        }
    }
    s = sum1 + sum2;
    cout << "Tong = " << s;
    return s;
}

int main()
{
    int n;
    cout << "Nhap vao n = ";
    cin >> n;

    tinhToan(n);
    return 0;
}

