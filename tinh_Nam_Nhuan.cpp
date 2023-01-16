/*
Năm nhuận theo dương lịch là như thế nào:
        vì 1 năm có 365 ngày và 6 giờ => 4 năm thì có 4 * 6 = 24 giờ nên thừa ra 1 ngày
        vì thế họ gọi đó là ngày nhuận và năm đó là năm nhuận
        cứ cách 4 năm thì nhuận 1 lần
    // tính năm nhuận bằng cách :
        (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)
*/

#include <iostream>


void tinhNamNhuan(int n)
{
    if (n <= 0 || n > 100000)
    {
        std::cout << "Error";
    }
    else
    { 
        if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        {
            std::cout << "Nam nhuan";
        }
        else
        {
            std::cout << "Khong phai nam nhuan";
        }
    }
}

int main()
{
    int n;
    std::cout << "nhap vao nam: n = ";
    do {
        std::cin >> n;
            if (n < 0 || n > 100000) {
                std::cout << "INVALID";
            }
    } while (n < 0 || n > 100000);
    tinhNamNhuan(n);
    return 0;
}