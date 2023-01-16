
// Viết chương trình đếm số lượng chữ số của một số nguyên n nhập từ bàn phím.
// VD: 1233 đến là 4

// Tính theo cách thông thường 
#include <iostream>
using namespace std;

// int CountNumber (int n) {
//     if (n < 10) return 1;
//     return 1 + CountNumber(n / 10);
// }

int CountNumber(int n)
{
    int count = 0;
    // if (n == 0)
    //     count = 1;
    if (n < 10) return 1;
    while (n != 0)
    {
        count++; // sau một vòng lặp thì count sẽ tăng lên 1
        n = n / 10; // chia lấy nguyên cho 10, cứ một lần chia thì số n sẽ có một chữ số (vì đây là int nên chỉ lấy phần số nguyên);
    }
    return count;
}
int main()
{
    int n;
    do {
        cout << "\nnhap vao n = ";
        cin >> n;
    } while (n < 0 && cout << "Ban nhap sai, xin nhap lai (n>0): ");

    cout << "Count = " << CountNumber(n);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string S;
//     cin >> S;
//     if (S[0] == '-')
//         cout << S.length() - 1;
//     else
//         cout << S.length();
//     return 0;
// }