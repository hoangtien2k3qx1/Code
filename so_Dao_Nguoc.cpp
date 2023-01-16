
// Số đảo ngược : VD: 12345 -> đảo ngược lại là 54321


#include <iostream>
using namespace std;

// Cách 1: cách này có nhược điểm đó là, nếu có số 0 ở đầu hoặc cuối thì nó sẽ không chạy vòng lặp vào không in ra được số 0 đó;
int sodaonguoc(int n)
{
    int tmp;
    int res = 0;
    while (n > 0) // n != 0
    {
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    cout << res;
    return res;
}


// Cách 2:
// int sodaonguoc(int n)
// {
//     int tmp;
//     bool first = true;
//     while (n > 0)
//     {
//         tmp = n % 10;
//         if (first == true)
//         {
//             if (tmp != 0)
//             {
//                 cout << tmp;
//                 first = false;
//             }
//         }
//         else
//         {
//             cout << tmp;
//         }
//         n = n / 10;
//     }
//     return tmp;
// }


// Cách 3:
// int sodaonguoc(string s)
// {
//     int l = s.length();
//     if (s[0] == '0')
//     {
//         cout << "\nSo ban nhap khong hop le!";
//         return 0;
//     }
//     for (int i = 0; i < l; i++)
//     {
//         if (s[i] > '9' || s[i] < '0')
//         {
//             cout << "\nSo ban nhap khong hop le!";
//             return 0;
//         }
//     }

//     while (s[l - 1] == '0')
//         --l;

//     for (int i = l - 1; i >= 0; --i)
//     {
//         cout << s[i];
//     }
//     return 0;
// }


int main() {
    int n;
    // string s;
    // cin >> s;
    cout << "nhap vao n = ";
    cin >> n;
    sodaonguoc (n);
    return 0;
}