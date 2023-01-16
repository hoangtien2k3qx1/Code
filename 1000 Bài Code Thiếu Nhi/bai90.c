
// tim m lớn nhất sao cho 1 + 2 + 3 + ... + m < N.

#include<stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i=1; i<n; i++) {
        sum += i;
        if (sum >= n) {
            printf ("%d", i-1);
            break;
        }
    }

    return 0;
}


// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int N, m, S;
//     printf("\nNhap N: ");
//     scanf("%d", &N);

//     S = 0;
//     m = 0;
//     do
//     {
//         m = m + 1;
//         S = S + m;
//     }while(S + m + 1 < N);
//     printf("\nSo nguyen duong m la %d", m);
//     getch();
//     return 0;
// }