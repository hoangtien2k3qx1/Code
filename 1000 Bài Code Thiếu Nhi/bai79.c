
// Nhập vao n và đếm xem có bao nhiêu chữ số.

#include<stdio.h>

long long Count(long long n) {
    long long count = 0;
    if (n <= 9) {
        return 1;
    } else {
        while(n != 0){
            count++;
            n /= 10; 
        }
    }
    return count;
}

int main() {
    long long n;
    scanf ("%lld", &n);
    printf ("%lld", Count(n));
    return 0;
}