
/*
    Nguồn: Luyện code _ MT04- Sắp xếp ma trận 1

    Viết chương trình nhập ma trận các số nguyên AA có mm dòng và nn cột từ bàn phím.
    Hãy sắp xếp hàng thứ ii của ma trận tăng dần và in ra ma trận sau khi thực hiện sắp xếp xong.

    Dòng đầu tiên là 3 số nguyên dương m, n và i.
    Dòng thứ 2 là m * n số nguyên tương ứng là các phần tử của mảng AA

*/

#include<stdio.h>

void input_Array (int a[][100], int b[], int m, int n, int x) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf ("%d", &a[i][j]);
            if ((x - 1) == i) {
                b[j] = a[i][j];
            }
        }
    }
}

void swap_Array1 (int a[][100], int b[], int m, int n, int x) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (b[j] < b[j - 1]) {
                int temp = b[j];
                b[j] = b[j - 1];
                b[j - 1] = temp;
            }
        }
    }
}

void output_Array2 (int a[][100], int b[], int m, int n, int x) {
    for (int i=0; i<m; i++) {
        for (int j=0; j < n; j++) {
            if ((x - 1) == i) {
                printf ("%d ", b[j]);
            } else {
                printf ("%d ", a[i][j]);
            }
        }
        printf ("\n");
    }
}


int main() {
    int m, n , x;
    int a[100][100];
    int b[100];
    scanf ("%d", &m);
    scanf ("%d", &n);
    scanf ("%d", &x);
    input_Array (a, b, m, n, x);
    swap_Array1 (a, b, m, n, x);
    output_Array2 (a, b, m, n, x);
    return 0;
}



