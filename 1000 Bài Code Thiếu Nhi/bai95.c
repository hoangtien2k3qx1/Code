
// tính giá trị tuyệt đối của 3 số thực nhập từ bàn phím.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    float a, b, c;
    scanf ("%f%f%f", &a, &b, &c);
    printf ("\n%f", fabs(a));
    printf ("\n%f", fabs(b));
    printf ("\n%f", fabs(c));


    return 0;
}