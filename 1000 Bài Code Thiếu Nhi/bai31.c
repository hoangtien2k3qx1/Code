
// Kiểm tra số nguyên tố.

#include <stdio.h>
#include<math.h>

void songuyento (int n) {
    int count = 0;
    if (n < 2) {
        printf ("\n%d KHONG PHAI LA SO NGUYEN TO ");
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) { 
            count++; 
            printf ("\n%d chia het cho %d", n, i);
        }
    }
    if (count == 0) {
        printf ("%d LA SO NGUYEN TO ", n);
    } else {
        printf ("%d KHONG PHAI LA SO NGUYEN TO ", n);
    }
}

int main()
{
    int n, count = 0;
    do {
        printf("Nhap vao n (n > 0) = ");
        scanf("%d", &n);
    } while (n < 0 && printf("\nXin nhap lai!: "));
    songuyento(n);
    return 0;
}


