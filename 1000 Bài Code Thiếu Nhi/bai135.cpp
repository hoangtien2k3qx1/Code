
// Tìm phần tử dương đầu tiên trong mảng 1 chiều số thực. Nếu không có return -1;

#include<iostream>
#include<cmath>

float find_Even (float arr[], int n) {
    float even = arr[0];
    for (int i=0; i<n; i++) {
        if (arr[i] > even && arr[i] > 0) {
            even = arr[i];
        } else {
            return -1;
        }
    }
    return even;
}

int main() {
    int n;
    float arr[10];
    std::cout << "Nhap vao n = ";
    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> arr[i];
    }
    float x = find_Even(arr, n);
    std::cout << x << std::endl;
    return 0;
}