// Bài 42 : Cho n là số nguyên dương.Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k) < n.
// Trong đó chuỗi k được định nghĩa như sau : S(k) = 1 + 2 + 3 + … + k

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n;
    float S;
    i = 0;
    S = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
    } while (n < 0 && printf("Error: (n >= 0)\n"));

    // do {
        
    //     printf ("\nnhap vao gia tri n = ");
    //     scanf ("%d", &n);
    //     if (n < 0) {
    //         printf ("\nnhap lai gia tri n (n > 0) ");
    //     }
    // }while (n < 0);


    while ( S + i < n)
    {
        i++;       
        S = S + i; // tương đương 1 dòng S += ++i; // S += i;
    }
    printf("\nGia tri k lon nhat de S(k) = 1 + 2 + ... + k < n la %d", i);
    getch();
    return 0;
}

/*




*/