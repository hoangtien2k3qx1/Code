
// tính x + (x^2)/(1+2) + ... + (x^n)/(1+2+3+...+n).

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int n, x;
    scanf ("%d%d", &x, &n);
    float sum = 0, T =1, S = 0;
    for (int i=1; i<=n; i++) {
        T *= x;
        S += i;
        sum += T/S;
    }
    printf ("%f", sum);
    getch();
    return 0;
}

