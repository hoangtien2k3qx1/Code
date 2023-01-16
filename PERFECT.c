
// nguồn: luyện code/ PERFECT
/*
    PERFECT - Cặp đôi hoàn hảo
*/

#include <stdio.h>

int swap_Array(int n, int a[])
{
    int pos, x;
    for (int i = 1; i < n; i++)
    {
        x = a[i];
        pos = i;
        while (pos > 0 && x < a[pos - 1])
        {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = x;
    }
}

int main()
{
    int n, a[10000];
    printf ("Input n = "); scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }
    swap_Array (n, a);
    int min;
    for (int i = a[n - 1]; i > 0; i--)
    {
        if (a[i] - a[i - 1] < a[i - 1] - a[i - 2])
        {
            min = a[i] - a[i - 1];
        }
    }
    printf("%d", min);
    return 0;
}

