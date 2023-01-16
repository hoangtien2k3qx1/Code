
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int n;
    scanf ("%d", &n);
    float sum = 0, T = 1;
    for (int i=1; i<=n; i++) {
        T *= i;
        sum += 1.0/T;
    }
    printf ("%f", sum);
    getch();
    return 0;
}