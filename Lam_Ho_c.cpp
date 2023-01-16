/*
    Đội văn nghệ xung kích của trường đại học X được cử đi diễn giao lưu ở các
    huyện trong tỉnh Y. Khi đi đoàn có bạn nam và bạn nữ. Mỗi tổ sẽ được giao nhiệm vụ
    biểu diễn tại một địa điểm phục vụ các em nhỏ. Biết rằng số lượng nam và nữ phải chia
    đều giữa các tổ. Hỏi người quản lý có thể chia số sinh viên ra tối đa được bao nhiêu tổ?
    Mỗi tổ có bao nhiêu nam và bao nhiêu nữ.
    
*/

#include <iostream>
using namespace std;

int UCLN ( int n, int m) {
    while (m > 0){
        int r = n % m;
        n = m;
        m = r;
    }
    return n;
}

int main() {
    int n,m;
    cin >> n >> m;
    cout<< UCLN (n,m) << endl;
    int a = n / UCLN (n,m);
    int b = m / UCLN (n,m);
    cout<< a <<' '<< b;
    return 0;
}