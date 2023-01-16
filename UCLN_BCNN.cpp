
#include <stdio.h>
#include<math.h>


// // cách thông thường
// int main() {
//     unsigned a, b, gcd, lcm;
//     printf( "Nhap cap (a, b): " );
//     scanf( "%u%u", &a, &b );

//     gcd = a;
//     while ( a % gcd || b % gcd ) {
//         gcd--;
//     }
//     printf( "USCLN (a, b): %u\n", gcd );

//     lcm = a;
//     while ( lcm % a || lcm % b ) {
//         lcm++;
//     }
//     printf( "BSCNN (a, b): %u\n", lcm );
    
//     return 0;
// }


// Cách khác tính UCLN bằng đệ qui
int UCLN(int a, int b) {
    if (b == 0) {
        return a;
    }
    return UCLN(a, b % a);
}

// cách tìm BCNN bằng đệ quy
int BCNN(int a, int b) {
    return a / UCLN(a, b) * b;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d", UCLN(a, b));
    printf("\n%d", BCNN(a, b));


    return 0;
}






//! /////////////////////////
// Hoặc tìm UCLN bằng cách này:
// #include <stdio.h>
//     int main() {
//     unsigned a, b, c;
//     printf( "Nhap cap (a, b): " );
//     scanf( "%u%u", &a, &b );

//     c = a * b;
//     while ( a - b ) ( a > b ) ? ( a -= b ) : ( b -= a );
//     printf( "USCLN (a, b): %u\n", a );
//     printf( "BSCNN (a, b): %u\n", c/a );

//     return 0;
// }