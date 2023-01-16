/*
    Chuyển số nhị phân sang thập phân.
        Hệ thập phân: 1234 = 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0
        Hệ nhị phân: 101 = 1 * 2^2 + 0 * 2^1 + 1 * 2^0

        1234 => 1*10^0 + 2* 10^1 + 3*10^2 + 4*10^3 = 4321 ( đảo ngược )

    Cách chuyển:
        n = 8
        0, 4 => 8 % 2 * 10 ^ 0
        0, 2 => 4 % 2 * 10 ^ 1
        0, 1 => 2 % 2 * 10 ^ 2
        1, 0 => 1 % 2 * 10 ^ 3
        int kq = 1000

        Mục đích mà nhân với 10^0 ... 10^4 là để đảo ngược số đó.  
 */
 
// Cách 1:
// #include <stdio.h>
// #include <math.h>
 
// int Binary_N(int decimalNumber) 
// {
//     int binaryNumber = 0;
//     int i = 0;
//     while (decimalNumber != 0)
//     {
//         binaryNumber += (decimalNumber % 2) * pow(10, i);
//         decimalNumber /= 2;
//         i++;
//     }
//     return binaryNumber;
// }
 
// int main()
// {
//     int decimalNumber;
//     printf("\nInput decimalNumber: ");
//     scanf("%d", &decimalNumber);
//     printf("BinaryNumber = %d", Binary_N(decimalNumber));
// }

// chuyển thập phân sang nhị phân bằng stack ( stack là vào sau thì lấy ra trước )
#include<iostream>
#include<stack>

using namespace std;

int main() {
    system("cls");
    stack<int> st;
    int n;
    cin >> n;

    while(n > 0) {
        st.push(n % 2);
        n /= 2;
    }

    while(!st.empty()){
		cout << st.top();
		st.pop();
	}

    cin.get();
    return 0;
}



//! Chuyển từ Nhị phân về Thập phân:
// #include<stdio.h>  
// #include<conio.h>  
// #include<math.h>

// //! 1001(2) = 9
// int DecimalNumber (int binaryNumber) {
//     int decimalNumber = 0;
//     int i = 0; 
//     while (binaryNumber != 0) {
//         decimalNumber += (binaryNumber % 10) * pow(2, i);
//         binaryNumber /= 10;
//         i++;
//     }
//     return decimalNumber;
// }

// int main() {
//     int binaryNumber;
//     printf ("Nhap vao binaryNumer = ");
//     scanf ("%d", &binaryNumber);

//     printf ("DecimalNumber: %d", DecimalNumber(binaryNumber));
//     return 0;
// }










///////
// Cách 2:
// #include<stdio.h>  
// #include<conio.h>  
// int a[10],n,i;
// void Binary_N (int n, int a[]) {
//     for(i=0;n>0;i++)  
//     {  
//         a[i]=n%2;  
//         n=n/2;  
//     }  
//     printf("Nhi phan cua so vua nhap: ");  
//     for(i=i-1;i>=0;i--)  
//     {  
//         printf("%d",a[i]);  
//     }  
// }

// int main(){  
//     char TL;
//     do {
//         printf("\nNhap mot so bat ky: ");  
//         scanf("%d",&n);
//         Binary_N(n, a);
//         printf ("\nBan co muon tiep tuc(Y, N): ");
//         fflush(stdin);
//         TL = getchar();
//     } while (TL == 'Y' || TL == 'y');
    
//     return 0;
// }




