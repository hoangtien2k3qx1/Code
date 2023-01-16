// Cách 1:
// Nếu muốn đếm số ước của một số n thì ta cần phải xét 2 trường hợp
//  TH1: n > 0 
//  th2: n < 0
// Cách 2:
// chỉ cần xét trường hợp (n > 0) và ta cho hàm tính dá trị tuyệt đối vào (n = abs(n))

#include <iostream>
#include <math.h>
using namespace std;

int UocChung(int n)
{
    int count = 0;
    n = abs(n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    cout << "So uoc cua n la : " << count;
    return count;
}
int main()
{
    int n, count = 0;
    cout << "nhap vap n = ";
    cin >> n;
    UocChung(n);
    return 0;
}