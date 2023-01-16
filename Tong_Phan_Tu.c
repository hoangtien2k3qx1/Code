
// Đề bài: 
// VD: 12345 thì yêu cầu tính Sum = 1 + 2 + 3 + 4 + 5

#include<stdio.h>
#include<string.h>


int main() {
    int n,sum = 0, digit;
    printf ("nhap vao n = ");
    scanf("%d", &n);
    while (n) { // n != 0
        sum += n % 10;
        n = n/10;
    }

    // for ( ; n != 0; ) {
    //     sum += n % 10;
    //     n = n / 10;
    // }

    // for ( ; n ; n = n/10) {
    //     sum += n % 10;
    // }
    
    printf("Result Sum = %d\n", sum);
    return 0;
}

