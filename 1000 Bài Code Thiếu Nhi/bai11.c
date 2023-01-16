#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int n, T = 1, sum = 0;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++) {
        T *= i;
        sum += T;
    }
    printf ("%d", sum);

    getch();
    return 0;
}