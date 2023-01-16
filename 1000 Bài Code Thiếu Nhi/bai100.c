
// giải pt bậc 2: ax^2 + bx + c = 0

#include<stdio.h>
#include<math.h>
#include<conio.h>

int GiaPPBac2(float a, float b, float c) {
    if (a==0) {
        if (b==0) {
            if (c==0) {
                printf("Phuong trinh vo so nghiem");
            } else {
                printf ("Phuong trinh vo nghiem");
            }
        } else {
            printf ("%f", -c/b);
        }
    } else {
        float delta = b*b - 4*a*c;
        if (delta > 0) {
            printf  ("Phuong trinh co 2 nghiem phan biet:\n");
            printf ("x1 = %f\n", (-b + sqrt(delta))/(2*a));
            printf ("x1 = %f\n", (-b - sqrt(delta))/(2*a));
        } else if (delta == 0) {
            printf ("Phuong trinh co nghiem kep:\n");
            printf ("x = x1 = x2 = %f", -b/(2*a));
        } else {
            printf ("Phuong trinh vo nghiem");
        }
    }
}

int main() {
    float a, b, c;
    scanf ("%f%f%f", &a, &b, &c);
    GiaPPBac2(a, b, c);
    return 0;
}