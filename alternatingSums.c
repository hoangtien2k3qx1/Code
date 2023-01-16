

#include<stdio.h>

int *divide (int n, int a[], int b[]) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum1 += a[i];
        else
        {
            sum2 += a[i];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        b[0] = sum1;
        b[1] = sum2;
    }
    for (int i = 0; i < 2; i++) {
        printf ("%d ", b[i]);
    }
    return b;
}

int main() {
    int n, a[100], b[2];
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }
    divide (n, a, b);

    return 0;
}