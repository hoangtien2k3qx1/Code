
// tính tổng các ước của n.

#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++) {
        if (n % i == 0) {
            printf ("%d ", i);
        }
    }
    getch();
    return 0;
}