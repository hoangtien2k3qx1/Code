
#include<iostream>
#include<math.h>

bool nt(int a) {
    for (int i=2; i<=sqrt(a); i++) {
        if (a % i == 0) {
           return false;
        }
    }
    return a > 1;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    for (int i=0; i<n; i++)  {
        if (nt(a[i])) {
            std::cout << a[i] << " ";
        }
    }
    return 0;
}








///////////////////////////////////
// #include<stdio.h>
// #include<math.h>

// int NguyenTo (int n) {
//     for(int i=2; i<=sqrt(n); i++) {
//         if (n % i == 0) {
//             return 0;
//         }
//     }
//     return n>1;
// }

// int main() {    
//     int n;
//     printf("Nhap vao n = ");
//     scanf("%d", &n);
//     if (NguyenTo(n)) {
//         printf("nguyen to");
//     } else {
//         printf("Ko phai nguyen to");
//     }

//     return 0;
// }