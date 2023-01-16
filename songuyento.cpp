/* 
số nguyên tố là số có 2 ước : là 1 và chính nó
sô nguyên tố dương nhỏ nhất là số 2
các số nguyên tố > số 2 đều là các số nguyên tố lẻ

*/

#include <stdio.h>
#include<math.h>

int songuyento (int n) {
    int count = 0;
    if (n < 2) {
        printf ("\n%d KHONG PHAI LA SO NGUYEN TO ");
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) { 
            count++; 
            printf ("\n%d chia het cho %d", n, i);
        }
    }
    if (count == 0) {
        printf ("\n%d LA SO NGUYEN TO ", n);                                                                                                                    
    } else {
        printf ("\n%d KHONG PHAI LA SO NGUYEN TO ", n);
    }
    return 0;
}

int main()
{
    int n, count = 0;
    do
    {
        printf("Nhap vao n (n > 0) = ");
        scanf("%d", &n);
    } while (n < 0 && printf("\nXin nhap lai!: "));
    songuyento(n);
    return 0;
}

// bool nguyenTo(int n)
// {
//     for (int i = 2; i <= (int)sqrt(n); i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return n > 1;
// }
