
// Rút gọn phân số đề đưa về phân số tối giản
//          Nếu phân số được yêu cầu không hợp lệ, in raINVALID
//          Nếu giá trị của phân số là một số nguyên, in ra số nguyên đó
//          Trường hợp khác, in ra tử số và mẫu số của phân số tối giản cách nhau 1 dấu cách
//          a / b = tối giản

#include <iostream>
#include <math.h>

using namespace std;

// int UCLN(int a, int b)
// {
//     int r;
//     a = abs(a);
//     b = abs(b);
//     while (b > 0)
//     {
//         r = a % b;
//         a = b;
//         b = r;
//     }
//     return a;
// }

int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(a, a % b);
}

int main()
{
    int a, b;
    cout << "nhap vao a = ";
    cin >> a;
    cout << "nhap vao b = ";
    cin >> b;
    if (b == 0)
        cout << "INVALID";
    else if (a % b == 0)
        cout << a / b;
    else {
        if (a * b < 0 && b < 0) {
            b = b * -1;
            a = a * -1;
        }
        if (a * b > 0 && a < 0 && b < 0) {
            a = a * -1;
            b = b * -1;
        }
        cout << a / UCLN(a, b) << "/" << b / UCLN(a, b);
    }
}