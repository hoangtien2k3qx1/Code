
#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    scanf ("%d", &n);
    float sum = 0;
    for (int i=1; i<=n; i++) {
        sum += 1.0/ (i*(i+1));
    }
    printf ("%f", sum);

    getch();
    return 0;
}