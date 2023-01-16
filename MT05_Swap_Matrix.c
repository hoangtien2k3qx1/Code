// nguồn: luyện code / MT05 _ sắp xếp
/*
    Viết chương trình nhập ma trận các số nguyên A có m dòng và nn cột từ bàn phím.
    Hãy sắp xếp - cột thứ i - của ma trận tăng dần và in ra ma trận sau khi thực hiện sắp xếp xong.

    Dòng đầu tiên là 3 số nguyên dương m, n và i.
    Dòng thứ 2 là m * n số nguyên tương ứng là các phần tử của mảng A


*/
// theo cột:
#include <stdio.h>

void input_Array(int m, int n, int x, int a[][100], int b[])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if ((x - 1) == j)
            {
                b[i] = a[i][j];
            }
        }
    }
}

void swap_Array_1(int m, int n, int x, int a[][100], int b[])
{
    int pos, y;
    for (int i = 1; i < m; i++)
    {
        y = b[i];
        pos = i;
        while (pos > 0 && y < b[pos - 1])
        {
            b[pos] = b[pos - 1];
            pos--;
        }
        b[pos] = y;
    }
}

void output_Array_Matrix(int m, int n, int x, int a[][100], int b[])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((x - 1) == j)
            {
                printf("%d ", b[i]);
            }
            else
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int m, n, x;
    int a[100][100], b[100];
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &x);
    input_Array(m, n, x, a, b);
    swap_Array_1(m, n, x, a, b);
    output_Array_Matrix(m, n, x, a, b);
    return 0;
}