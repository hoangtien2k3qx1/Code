

#include<iostream>
#include<string>
using namespace std;
 
string add(string a, string b)
{
    string res = ""; // todo: dùng để chứa kết quả

    while(a.length() < b.length()) a = "0" + a; //! cộng thêm các ký tự '0' vào string
    while(a.length() > b.length()) b = "0" + b; //! cộng thêm các ký tự '0' vào string

    int carry = 0; // biến nhớ

    for(int i = a.length() - 1; i >= 0; i--)
    {    //! 9 + 3 = 12 + 0;
        int tmp = (a[i] - '0') + (b[i] - '0') + carry;
        carry = tmp / 10; //! lấy ra phần nguyên
        tmp = tmp % 10; 
        res = (char)(tmp + '0') + res;
    }

    if(carry > 0) res = "1" + res;

    return res;
}

int main() {
    string a, b;
    std::cin >> a >> b;
    std::cout << add(a, b) << std::endl; 

    return 0;
}



