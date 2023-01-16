// CÁCH SỬ DỤNG IF ĐỂ KIỂM TRA SỐ CHÍNH PHƯƠNG;

// #include <stdio.h>
// #include <conio.h>
// #include <math.h>
// int main()
// {
//     int i, n;
//     do
//     {
//         printf("\nNhap n: ");
//         scanf("%d", &n);

//         if (n <= 0)
//             printf("\nn phai > 0. Xin nhap lai !");

//     } while (n <= 0);
//     /*Số chính phương là số mà kết quả khai căn bậc 2 là 1 số nguyên
//     sqrt(4) = 2.00000 => ép về nguyên = 2 => vì 2.000  == 2 (true) => là số chính phương
//     sqrt(5) = 2.23234 => ép về nguyên = 2 => vì 2.4324 != 2 (false) => không là số chính phương*/
//     if (sqrt((float)n) == (int)sqrt((float)n)) // So sánh 2 số khi chưa ép về kiểu nguyên và số đã ép về kiểu nguyên
//     {
//         printf("\n%d La so chinh phuong", n);
//     }
//     else
//     {
//         printf("\n%d Khong la so chinh phuong", n);
//     }

//     getch();
//     return 0;
// }


// CÁCH SỬ DỤNG VÒNG FOR ĐỂ KIỂM TRA SỐ CHÍNH PHƯƠNG
// #include <iostream>

// int main()
// {
//     int n;
//     std:: cout << "nhap vao n = ";
//     std::cin >> n;
//     for (int i = 0; i * i <= n; i++)
//     {
//         if (i * i == n)
//         {
//             std ::cout << "YES";
//             return 0;
//         }
//     }
//     std::cout << "NO";
//     return 0;
// }

#include<iostream>
#include<math.h>

int main() {
    int n;
    std:: cout << "nhap vao n = ";
    std:: cin >> n;

    int s = sqrt((int)n);
    if (s*s == n) {
        std:: cout << "so chinh phuong";
    } else {
        std:: cout << "khong phai so chinh phuong";
    }
    return 0;
}