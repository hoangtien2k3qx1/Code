
#include<iostream>
using namespace std;

int ChiHet (int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            sum += a[i];
        }
    }
    return sum;
}

int GiaTriLe (int n, int a[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int So_lan_xua_hien_X(int a[], int n, int x)
{
	int Dem_X = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] == x) {
			Dem_X += 1;
        }
    }
    return Dem_X;
}

int main() {
    int n, a[100], x;
    cout << "Nhap vao n = ";
    cin >> n;
    cout << "Nhap vao x = ";
    cin >> x;
    cout << "Nhap cac phan tu mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Sum = " << ChiHet(n, a) << endl;
    cout << "Gia tri le trong mang : " << GiaTriLe(n, a) << endl;
    cout<< "So phan tu "<< x <<" xuat hien trong Mang la: "<< So_lan_xua_hien_X(a, n, x);

    return 0;
}