
// Nhập vào số nguyên có 2 chữ số và in ra cách đọc của số đó

#include<stdio.h>
#include<conio.h>
#include<math.h>

void docSo_2(int n) {
    int donvi = n % 10;
    int chuc = n / 10;

    if (chuc == 2)
    {
        printf("Hai");
    }
    else if (chuc == 3)
    {
        printf("Ba");
    }
    else if (chuc == 4)
    {
        printf("Bon");
    }
        else if (chuc == 5)
    {
        printf("Nam");
    }
    else if (chuc == 6)
    {
        printf("Sau");
    }
    else if (chuc == 7)
    {
        printf("Bay");
    }
    else if (chuc == 8)
    {
        printf("Tam");
    }
    else if (chuc == 9)
    {
        printf("Chin");
    }

    printf(" Muoi ");

    if (donvi == 1)
    {
        printf("Mot");
    }
    else if (donvi == 2)
    {
        printf("Hai");
    }
    else if (donvi == 3)
    {
        printf("Ba");
    }
    else if (donvi == 4)
    {
        printf("Bon");
    }
    else if (donvi == 5)
    {
        printf("Nam");
    }
    else if (donvi == 6)
    {
        printf("Sau");
    }
    else if (donvi == 7)
    {
        printf("Bay");
    }
    else if (donvi == 8)
    {
        printf("Tam");
    }
    else if (donvi == 9)
    {
        printf("Chin");
    }
    
}

int main() {
    int n; 
    do {
        printf ("\nNhap vao n = "); 
        scanf ("%d", &n); // nhập vào n có 2 chữ số
    } while (n < 10 && printf ("Nhap lai n co 2 chu so: "));
    docSo_2(n);
    return 0;
}

