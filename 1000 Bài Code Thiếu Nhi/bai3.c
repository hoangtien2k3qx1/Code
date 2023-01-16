
#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    float sum = 1.0;
    scanf ("%d", &n);
    for (int i=2; i<=n; i++) {
        sum += 1.0/i;
    }
    printf ("%f", sum);
    getch();
    return 0;
}