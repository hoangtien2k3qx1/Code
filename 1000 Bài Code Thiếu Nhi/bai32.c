
// kiểm tra số chính phương.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int n;
    scanf ("%d", &n);
    float s = sqrt((int)n);
    if (s*s == n) {
        printf ("%d la so chinh phuong", n);
    } else {
        printf ("%d khong phai la so chinh phuong", n);
    }
    getch();
    return 0;
}