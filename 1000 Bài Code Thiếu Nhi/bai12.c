
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    float x, sum = 0, n;
    scanf ("%f%f", &x, &n);
    for (int i=1; i<=n; i++) {
        sum += pow(x, i);
    }
    printf ("%f", sum);
    getch();
    return 0;
}