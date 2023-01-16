//! đến số lần xuất hiện của các phần tử trong mảng

#include<bits/stdc++.h>
using namespace std;

void tan_Xuat(vector<int> v) {
    vector<int> b(254, 0);
    for(int i=0; i < v.size(); i++) {
        b[v[i]]++;
    }
    for(int i = 0; i < b.size(); i++) {
        if (b[i] > 0) {
            cout << i << " - " << b[i] << ";" << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    tan_Xuat(v);
    return 0;
}



// Tìm tần xuất lẻ xuất hiện
// #include <iostream>
// using namespace std;
 
// const int MAX = 1e6; // 1e6 = 1 * 10^6
// int cnt[MAX];
// const int ma = 1e7;
// int a[ma];
// int n;

// void Find(int n) {
//     for(int i = 0; i < MAX; i++) 
//         cnt[i] = 0;
//     for(int i = 0; i < n; i++){
//         cnt[a[i]]++;
//     }
//     for(int i = 0; i < MAX; i++){
//         if(cnt[i] == 1){
//             cout << i << endl;
//         }
//     }
// }

// int main(){
// 	cin >> n;
// 	for(int i=0; i<n; i++) {
//         cin >> a[i];
//     }
//     Find(n);
//     return 0;
// }




