
#include <stdio.h>

int main()
{
    float a, b, c;
    printf("\nNhap 3 so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    float maxValue = a;

    // if (b > maxValue)
    // {
    //     maxValue = b;
    // }

    // if (c > maxValue)
    // {
    //     maxValue = c;
    // }

    if (b > a && b > c) {
        maxValue = b;
    } 
    if (c > b && c > a) {
        maxValue = c;
    }

    printf ("Gia tri maxValue : %.2f", maxValue);

    return 0;
}