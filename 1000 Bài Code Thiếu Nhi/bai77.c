
// S(n) = 1 + 2 + 3 + … + n.

#include<stdio.h>
#include<conio.h>

int main() {
    int n, sum = 0;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++) {
        sum += i;
    }
    printf ("%d", sum);
    getch();
    return 0;
}