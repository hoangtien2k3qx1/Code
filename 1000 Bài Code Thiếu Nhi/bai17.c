#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>

int main() {
    int n;
    float x, T=1, S=1, P=0, sum = 0;
    scanf ("%f", &x);
    scanf ("%d", &n);
    for (int i=1; i<+n; i++) {
        T *= x;
        S *= i;
        P += S;
        sum += T/P;
    }
    printf ("%f", sum);
    getch();
    return 0;
}