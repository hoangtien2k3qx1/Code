
// nhập vào số nguyên có 3 chữ số, in ra cách đọc.

#include<stdio.h>
#include<math.h>
#include<conio.h>
// Ex: 123 => mot tram hai ba
void CachDocN(int n) {
    int donvi, chuc, hangtram;
    donvi = n % 10; // 123 % 10 = 3
    chuc = (n / 10) % 10;  // 123 / 10 = 12 // 12 % 10 = 2 => (n/10)%10
    hangtram = n / 100; // 123 / 100 = 1

    if (hangtram == 1)
        printf ("mot tram ");
    else if(hangtram == 2)
        printf ("hai tram ");
    else if(hangtram == 3)
        printf ("ba tram ");
    else if(hangtram == 4)
        printf ("bon tram ");
    else if(hangtram == 5)
        printf ("nam tram ");
    else if(hangtram == 6)
        printf ("sau tram ");
    else if(hangtram == 7)
        printf ("bay tram ");
    else if(hangtram == 8)
        printf ("tam tram ");
    else if(hangtram == 9)
        printf ("chin tram ");

    if (chuc == 2)
        printf("hai");
    else if (chuc == 3)
        printf("ba");
    else if (chuc == 4)
        printf("bon");
    else if (chuc == 5)
        printf("nam");
    else if (chuc == 6)
        printf("sau");
    else if (chuc == 7)
        printf("bay");
    else if (chuc == 8)
        printf("tam");
    else if (chuc == 9)
        printf("chin");

    printf("muoi ");

    if (donvi == 1)
        printf("mot");
    else if (donvi == 2)
        printf("hai");
    else if (donvi == 3)
        printf("ba");
    else if (donvi == 4)
        printf("bon");
    else if (donvi == 5)
        printf("nam");
    else if (donvi == 6)
        printf("sau");
    else if (donvi == 7)
        printf("bay");
    else if (donvi == 8)
        printf("tam");
    else if (donvi == 9)
        printf("chin");
}

int main() {
    int n;
    do {
        printf ("\nNhap vao n(co 3 chu so): ");
        scanf ("%d", &n);
    }while((n < 100 || n>1000) && printf ("Error.Nhap lai n: "));
    CachDocN(n);
    return 0;
}