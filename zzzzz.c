#include<stdio.h>

int main() {
    int a, b, c, d;
    printf("Nhap vao a: ");
    scanf("%d", &a);

    b = a / 100;
    c = (a % 100) / 10;
    d = (a % 100) % 10;

    printf("\nHang Tram: %d", b);
    printf("\nHang Chuc: %d", c);
    printf("\nHang Don Vi: %d", d);

    return 0;
}