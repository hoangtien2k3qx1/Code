
// biện luận pt: ax + b = 0.

#include<stdio.h>

int main() {
    float a, b;
    scanf ("%f%f", &a, &b);

    if (a == 0)
    {
        if (b == 0)
        {
            printf ("phuong trinh vo so nghiem");
        }
        if (b != 0)
        {
            printf ("phuong trinh vo nghiem");
        }
    }
    if (a != 0)
    {
        printf ("x = %.2f", -b/a);
    }
    return 0;
}