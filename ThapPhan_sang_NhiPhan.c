
// viết chương trình chuyển từ hệ cơ số thập phân sang hệ cơ số nhị phân
// VD: 37(10) -> 100101(2)


#include<stdio.h>  
#include<conio.h>  

void NhiPhan (int n, int *a) {
    int i;
    for (i=0; n>0; i++) {
        a[i] = n%2;
        n /= 2;
    }
    for (i=i-1; i>=0; i--) {
        printf ("%d", a[i]);
    }
}

int main() {
    int n, arr[20];
    printf ("Input n = ");
    scanf ("%d", &n);
    NhiPhan(n, arr);
    return 0;
}

