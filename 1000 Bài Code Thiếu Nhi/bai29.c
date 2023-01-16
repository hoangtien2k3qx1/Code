
// in ra các ước số chẵn từ 1->n.

#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i=1; i<n; i++) {
        if(n % i == 0 && i % 2 == 1) {
            printf ("%d", i);
            break;
        }
    }
    getch();
    return 0;
}