
// hàm kiểm tra số nguyên tố.

#include<stdio.h>
#include<conio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    if (n < 2) {
        printf ("%d Khong phai so nguyen to", n);
        return 0;
    }
    if (n == 2) {
        printf ("%d la so nguyen to", n);
        return 0;
    }
    for (int i=2; i<n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if (count == 0) {
        printf ("%d la so nguyen to", n);
    } else {
        printf ("%d khong phai la so nguyen to", n);
    }
    return 0;
}