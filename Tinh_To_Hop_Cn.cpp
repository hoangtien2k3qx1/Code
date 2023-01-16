
// Tính tổ hợp :  C = n! / k!(n - k)!​
// Điều kiện là :   1 <= k <= n <= 25
// Cách giải: 
//          k = 0 , n = 0 -> return 1;
//          k = 1 -> return 1;
//          C(k,n) = n! / (k! * (n-k)!)  = C(k - 1, n - 1) + C(k, n - 1);


//C1:
#include <iostream>
using namespace std;

int C(int k, int n)
{
    if (k == 0 || k == n)
        return 1;
    if (k == 1)
        return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main()
{
    int n, k;
    char TL;
    
    do {
        cout << "Nhap vao n = ";
        cin >> n;
        cout << "nhap vao k = ";
        cin >> k;
        if (n < k) {
            cout << "\nBan nhap sai, Xin nhap lai (n > k) :";
            cout << "\nNhap vao n = ";
            cin >> n;
            cout << "nhap vao k = ";
            cin >> k;
        }
        cout << "To hop C("<<k<<","<<n<<") = " << C(k, n) << endl;
        cout << "\nBan co muon tiep tuc khong(Y, N) : ";
        cin >> TL;
    } while (TL == 'Y' || TL == 'y');
    
    return 0;
}

//C2:
// #include <iostream>
// using namespace std;
//
// int toHop (int n, int k)  {
//     int T = 1, S = 1, P = 1, sum = 1;
//     for (int i = 1; i <= n; i++) {
//         T = T * i;
//     }
//     for (int i = 1; i <= k; i++) {
//         S = S * i;
//     }
//     int X = n - k;
//     for (int i=1; i <= X; i++) {
//         P = P * i;
//     }
//     sum = T / (S * P);
//     cout << sum;
//     return sum;
// }

// int main() {
//     int n,k;
//     int T =1 , S=1, P=1,sum=1;
//     int X;
//     cout << "nhap vao n = ";
//     cin >> n;
//     cout << "nhap vao k = ";
//     cin >> k;
//     toHop (n,k);
//     return 0;
// }


// C3:
// #include <iostream>

// double factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// double result(int n, int k)
// {
//     return (factorial(n)) / (factorial(k) * (factorial(n - k)));
// }
// int main()
// {

//     int n, k;
//     std::cin >> n >> k;
//     std::cout << result(n, k);
//     return 0;
// }