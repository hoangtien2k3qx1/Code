
// tìm số nguyên dương n nhỏ nhất trong ... 1 + 2 + 3 + ... + n >= 10000

#include<stdio.h>
#include<math.h>

int main() {
    int sum = 0;
    for (int i=1; i<=10000; i++) {
        sum += i;
        if (sum >= 10000) {
            printf ("n can tim la %d", i);
            break;
        }
    }

    return 0;
}