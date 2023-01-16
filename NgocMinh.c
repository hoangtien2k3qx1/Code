
// Câu 1: sử dụng ngôn ngữ lập trình C , viết chương trình thực hiện chức năng sau

#include <stdio.h>
// cách 1:
// int CountNumber (int n) {
//     if (n < 10) return 1;
//     return 1 + CountNumber(n / 10);
// }

// cách 2:
int CountNumber(int n)
{
    int count = 0;
    if (n < 10)
        return 1;
    while (n != 0)
    {
        count++;    
        n = n / 10; 
    }
    return count;
}
int main()
{
    int n;
    do
    {
        printf ("\nNhap vao n = ");
        scanf ("%d", &n);
    } while (n < 0 && printf ("Ban nhap sai, xin nhap lai (n>0): "));

    printf ("CountN : %d", CountNumber(n));
    return 0;
}

// Câu 2:

#include <stdio.h>

int tinhNamNhuan(long n)
{
    if (n <= 0 || n > 100000)
    {
        printf ("Error");
    }
    else
    { // n > 0
        if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        {
            printf ("Nam Nhuan");
        }
        else
        {
            printf ("Khong phai nam nhuan");
        }
    }
    return 0;
}
int main()
{
    long n;
    printf ("Nhap vao n = ");
    scanf ("%d", &n);
    tinhNamNhuan(n);
    return 0;
}

// Câu 3:

#include <stdio.h>

int input_Array(int n, int arr[])
{
    // 1:
    do
    {
        printf("\nNhap vao n = ");
        scanf("%d", &n);
        if (n > 100)
        {
            printf("Xin nhap lai gia tri n :");
        }
    } while (n > 100);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // 2:
    printf("\nCac phan tu cua mang : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Cac phan tu chan : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int n, arr[100];
    input_Array(n, arr);

    return 0;
}
