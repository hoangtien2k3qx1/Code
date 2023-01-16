// Bài 43 : Hãy đếm số lượng chữ số của số nguyên dương n

#include<stdio.h>
#include<math.h>




int nhap (int n) {
    do {
        printf ("\nnhap vao so nguyen duong n = ");
        scanf ("%d", n);
        if (n < 0) {
            printf ("\nLoi, xin nhap lai gia tri n(n > 0)");
        }
    } while (n < 0);
}


int main() {
    nhap(n);






    return 0;
}



