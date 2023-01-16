
// Viết hàm tính S = x^y.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int x, y;
    scanf ("%d%d", &x, &y);
    int s = pow(x, y);
    printf ("%d", s);
    return 0;
}