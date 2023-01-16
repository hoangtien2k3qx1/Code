// kiểm tra tam giác
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void CheckOut(float a, float b, float c) {
    if (a+b>c || a+c>b || b+c>a) {
        if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) {
            printf ("Tam giac vuong");
        } else if (a==b==c) {
            printf ("Tam giac deu");
        } else if (a==b || a==c || b==c) {
            printf ("Tam giac can");
        } else if (a*a>(b*b+c*c) || b*b>(a*a+c*c) || c*c>(b*b+a*a)) {
            printf ("Tam giac tu");
        } else {
            printf ("Tam giac nhon");
        }
    } else {
        printf ("Khong phai 3 canh tam giac");
    }
}

int main() {
    float a, b, c;
    scanf ("%f%f%f", &a, &b, &c);
    CheckOut(a, b, c);
    return 0;
}