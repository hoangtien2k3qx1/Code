#include <stdio.h>

Cách 1: interchanger sort
int main()
{
    int a, b;
    printf("\nNhap a = ");
    scanf("%d", &a);
    printf("\nNhap b = ");
    scanf("%d", &b);

    printf("a = %d, b = %d", a, b);

    // Hoán vị
    // Giả sử a = 3, b = 5
    int temp = a; // temp lưu giá trị của a // temp = a = 3, b = 5
    a = b; // a lấy giá trị của b và b giữ nguyên : a = 5 và b = 5
    b = temp; // b lấy giá trị của a qua temp : temp = 3 , b = 3 và a = 5

    /* 
    Cách hiểu sai
    // a = 3, b = 5
    a = b; : a = 5 , b = 5
    // a = 5, b = 5
    b = a; : b = 5 , a = 5; nên "SAI"
    */

    // In ra
    printf("\na = %d, b = %d", a, b);
    return 0;
}




// Cách 2 : // Hoán vị 2 số sử dụng toán tử + và –
// #include <stdio.h>
//     int main()
// {
//     int a = 10, b = 5;
//     printf("Before swapping: a = %d, b = %d", a, b);
//     // Code to swap a and b:
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("\nAfter swapping: a = %d, b = %d", a, b);
//     return 0;
// }




// Cách 3 : Hoán vị 2 số nguyên dùng toán tử *và /
// #include <stdio.h>
//          int main()
// {
//     int a = 10, b = 5;
//     printf("Before swapping: a = %d, b = %d", a, b);
//     // Code to swap a and b:
//     a = a * b;
//     b = a / b;
//     a = a / b;
//     printf("\nAfter swapping: a = %d, b = %d", a, b);
//     return 0;
// }




// Cách 4 : Sử dụng toán tử XOR
// #include <stdio.h>
//          int
//          main()
// {
//     int a = 10, b = 5;
//     printf("Before swapping: a = %d, b = %d", a, b);
//     // Code to swap a and b:
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     printf("\nAfter swapping: a = %d, b = %d", a, b);
//     return 0;
// }