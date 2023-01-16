// tính giai  thừa n! ;

#include <iostream>
using namespace std;
int giaiThua(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * giaiThua(n - 1);
}

// long giaiThua(long n)
// {
//     long T = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         T = T * i;
//     }
//     return T;
// }

int main()
{
    long n, T;
    cout << "nhap vao n = ";
    cin >> n;

    cout << giaiThua(n);
    return 0;
}


