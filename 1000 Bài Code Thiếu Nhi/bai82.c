
// Tìm max 3 số a, b, c. 

#include<stdio.h>

int main() {
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);
    int max = a;
    if (b > max && b > c) {
        max = b;
    } else if (c > max && c > b) {
        max = c;
    }
    printf ("%d", max);
}