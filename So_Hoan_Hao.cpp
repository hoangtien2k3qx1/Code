
// Số Hoàn Hảo : là số mà Tổng các ước nguyên dương của nó bằng chính nó 
// (không bao gồm ước lớn nhất: VD 6 thì ước lớn nhất ko được là 6)

#include <iostream>
using namespace std;

int SoHoanHao(long n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        cout << "La so hoan hao";
    }
    else
    {
        cout << "Khong phai la so hoan hao";
    }
    return 0;
}

int main()
{
    int n;
    cout << "Nhap vao n = ";
    cin >> n;
    SoHoanHao(n);
    return 0;
}
