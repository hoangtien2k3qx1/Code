
#include<stdio.h>

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int first, second;
    
    printf ("\nhap vao first = "); scanf ("%d", &first);
    printf ("\nhap vao second = "); scanf ("%d", &second);

    printf ("first = %d, second = %d", first, second);
    swap (first, second);
    printf ("\nfirst = %d, second = %d", first, second);

    return 0;
}