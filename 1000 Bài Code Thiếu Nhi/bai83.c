
// xét xem a và b nhập từ bàn phím có cùng dấu hay khác dấu.

#include<stdio.h>

int main() {
    float a, b;
    scanf ("%f%f", &a, &b);
    if ((a < 0 && b < 0) || (a > 0 && b > 0)) {
        printf ("%.2f va %.2f cung dau", a, b);
    } 
    if (a > 0) {
        if (b < 0) {
            printf ("%.2f va %.2f khong cung dau",a ,b);
        }
    } else {
        if (b > 0) {
            printf ("%.2f va %.2f khong cung dau",a, b);
        }
    }

    return 0;
}