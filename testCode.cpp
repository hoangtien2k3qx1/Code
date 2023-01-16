
#include<iostream>
using namespace std;

int main() {
    // int number = 9;
    // int *p1 = &number;
    // char *p2 = (char*)&number;
    // double *p3 = (double*)&number;
    // cout << "sizeof p1: " << sizeof(p1) << endl;
    // cout << "sizeof p2: " << sizeof(p2) << endl;
    // cout << "sizeof p3: " << sizeof(p3) << endl;

    int a = 9;
    // int *p = (int*)&a;
    int *p = &a;
    cout << sizeof(p);

    return 0;
}

