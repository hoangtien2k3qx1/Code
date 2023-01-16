
// kỸ thuật đặt lính canh
// Tìm phần tử lớn nhất trong mảng;

#include<iostream>
#include<cmath>

int findMax (int arr[], int n) {
    int Max = arr[0];
    for (int i=0; i<n; i++) {
        if (arr[i] > Max) {
            Max = arr[i];
        }
    }
    return Max;
}

int main() {
    int n;
    int arr[10];
    std::cout << "Nhap vao n = ";
    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> arr[i];
    }
    int x = findMax(arr, n);
    std::cout << "Max_Element_Array:  " << x << std::endl;

    return 0;
}