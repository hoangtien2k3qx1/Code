
// đếm các ước chẵn.

#include<stdio.h>
#include<conio.h>

int main() {
    int n, count = 0;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++) {
        if(n % i == 0 && i % 2 == 0) {
            count++;
        }
    }
    printf ("%d", count);
    getch();
    return 0;
}