
// tính tổng 1^3 + 2^3 + ... + n^3.

#include<stdio.h>
#include<math.h>

int main() {
    int n, sum=1;
    scanf ("%d", &n);
    for(int i=2; i<=n; i++) {
        sum += pow(i, 3);
    }
    printf ("%d", sum);
    return 0;
}