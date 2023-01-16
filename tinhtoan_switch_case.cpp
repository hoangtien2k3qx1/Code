
// Thực hieenh các phép toán bằng lênh "Switch_case" 
// xem lại cách thức hoạt động của lệnh switch _ case khác gì so với lệnh if_else 
// trường hợp nào nên dùng if_else và trường hợp nào nên dùng lệnh switch_case
// phải nhớ oke oke oke

#include <iostream>
#include <iomanip>

using namespace std;

int TinhToan(double a, char x, double b) 
{
    switch (x)
    {
    case '+':
        cout << fixed << setprecision(2) << a + b;
        break;
    case '-':
        cout << fixed << setprecision(2) << a - b;
        break;
    case '*':
        cout << fixed << setprecision(2) << a * b;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Math Error";
        }
        else
        {
            cout << fixed << setprecision(2) << a / b;
        }
        break;
    }
    return a,b;
}

int main() {
    double a, b;
    char x;
    cout << "nhap vao a = ";
    cin >> a;
    cout << "nhap vao phep toan (+,-,*,/) : ";
    cin.ignore(); // giống với fflush(stdin); trong C
    cin >> x;
    cout << "nhap vao b = ";
    cin >> b;

    cout << "Ket qua = ";
    TinhToan (a, x, b);
    
    return 0;
}