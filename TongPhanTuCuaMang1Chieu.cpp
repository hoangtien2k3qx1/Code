
#include<iostream>

Cách 1: dùng đệ quy
int SumArray1(int *a, int n) {
    if (n == 1)
        return *a;
    return a[n-1] + SumArray1(a, n-1);
}

Cách 2: dùng vòng lặp
int SumArray1(int *a, int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += a[i];
    }
    return sum;
}

Cách 3: 
int SumArray1(int *a, int left, int right) {
    if (left == right) 
        return a[left];
    int mid = (left + right)/2;
    return SumArray1(a, left, mid) + SumArray1(a, mid+1, right);
}

int main() {
    int n;
    int left, right;
    printf ("Input n = ");
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    printf ("Sum Element Array: %d", SumArray1(arr, n));
    return  0;
}
