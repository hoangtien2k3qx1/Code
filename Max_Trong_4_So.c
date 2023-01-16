// cho 4 số: a, b, c, d tìm max trong 4 số đó

#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf ("%d%d%d%d", &a, &b, &c, &d);
    int max = (a>b)?a:b;
    max = (max > c)?max:c;
    max = (max > d)?max:d;

    printf ("%d", max);
    return 0;
}