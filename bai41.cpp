//
// Created by Hoàng Anh Tiến on 15/12/2021.
//
// Bài 41 : Tính S(n) = 1 / (1 + 1 / (1 + 1 / (….1 + 1 / 1 + 1))) có n dấu phân số

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n;
    float S;
    i = 0;
    S = 1;

    printf("\nNhap n = ");
    scanf("%d", &n);

    while (i <= n)
    {
        S = 1 + 1.0 / S;
        i++;
    }
    printf("\nTong la %.4f", S);
    getch();
    return 0;
}