
// Độ dài mảng (số phần tử) = Kích thước mảng / kích thước 1 phần tử
// VD:

/*
To determine the size of your array in bytes, you can use the sizeof operator: int a[17]; size_t n = sizeof(a);
On my computer, ints are 4 bytes long, so n is 68. To determine the number of elements in the array,
we can divide the total size of the array by the size of the array element.
*/

// phân biệt được "Length"(độ dài) và "Dimentions"(kích thước)

#define nelem(a) sizeof(a)/sizeof(a[0])

#include<stdio.h>
int main() 
{
    char a[] = {'a','b','c','d','e','f','g'}; 
    printf ("Length a = %d", nelem(a)); // 7 phần tử ( vì đây là kiểu dữ liệu char)
    printf ("\nSize a = %d",sizeof(a));

    char b[] = "abcdefg";
    printf ("\n\nLength b = %d", sizeof(b)/ sizeof(b[0])); // sizeof(a) / sizeof(int)
    printf ("\nSize b = %d", sizeof(b));


    int c[] = {1, 2, 3, 4, 5};
    int length = sizeof c / sizeof(c[0]); // leng = sizeof(b) / sizeof(int)
    printf("\n\nLength c = %d", length);  // 5 phần tử ( vì đây là kiểu dữ liệu int )
    printf ("\nSize c = %d", sizeof(c));
    /*
    khi thay đổi kiểu dữ liệu thì sẽ gặp lỗi
    nên ta lấy luôn phần tử đầu tiên của mảng cho thuận tiện ( sizeof(b[0]) thay vì sizeof(int) )
    */

}



