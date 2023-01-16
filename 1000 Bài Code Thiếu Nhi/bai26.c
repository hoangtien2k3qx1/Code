
// tích các ước chẵn.
#include<stdio.h>
#include<conio.h>

int main() {
    int n, sum = 1;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++) {
        if(n % i == 0 && i % 2 == 1) {
            sum *= i;
        }
    }
    printf ("%d", sum);
    getch();
    return 0;
}