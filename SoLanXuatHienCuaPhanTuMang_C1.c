// đếm số lần xuất hiện của các phân tử trong mảng
/*
    ý tưởng là dùng thêm một mảng b[] cùng kích thước với mảng a[], để đánh dấu các phần tử đã được
    xét hoặc là chưa được xét. Dùng 2 vòng for để duyệt mảng, nếu phần tử nào đã được xét thì đánh
    dấu lại, làn lặp kết tiếp sẽ kiểm tra, nếu  giá trị đó đã xét thì bỏ qua còn chưa được xét
    thì tiến hành đếm số lần xuất hiện của nó.

*/

#include<stdio.h>

int arr[100], brr[100], n, count;

void Count_Element_Array () {
    for (int i=0; i<n; i++) {
        if (brr[i]) {
            count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    brr[j] = 0;
                }
            }
            printf ("\nGia tri %d xuat hien %d lan!", arr[i], count);
        }
    }
}

int main() {
    printf("Nhap vao n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf ("arr[%d] = ", i);
        scanf ("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        brr[i] = 1;
    }
    Count_Element_Array();
    return 0;
}



