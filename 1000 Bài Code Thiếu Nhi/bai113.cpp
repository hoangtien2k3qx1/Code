
// Lập chương trình sin(x) với độ chính xác 0.00001 theo công thức:

#include<stdio.h>
#include<math.h>
#include<conio.h>
#define eps 1e-4 // sai số

void HamSin (float x) {
    float S, T, LuyThua, GiaThua;
    int i, Dau = -1;
    S = T = LuyThua = x;
    for (int i=3; T > eps; i += 2, Dau = -Dau) {
        T = (LuyThua *= x * x) / (GiaThua *= i * (i - 1));
        S += Dau * T;
    }
    printf("\nCong thuc Taylor: sin (%.2f) = %.4f", x, S);
    printf("\nSin () cua math.h: sin(%.2f) = %.4f", x, sin(x));
}

int main(int argc, char* argv[]) {
    float x;
    printf ("Nhap vao x = ");
    scanf ("%f", &x);

    HamSin(x);
    return 0;
}