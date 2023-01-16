#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    do {
        scanf ("%d", &n);
    } while (n < 0 && printf ("Error: Input n: "));
    float sum = 0;
    for (int i=1; i<=n; i++) {
        sum += (float)(2*i + 1)/(2*i + 2);
    }
    printf ("%f", sum);
    getch();
    return 0;
}