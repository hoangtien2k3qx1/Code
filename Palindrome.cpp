

#include <iostream>
using namespace std;

// tim so doi xung
int reverse_num(int n){ 
  int reverse = 0; 
  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  return reverse;
}

int symmetrical_num(int n){ 
    // flag = 1 => số đối xứng
    // flag = 0 => không phải số đối xứng

  int flag =0;
  if (reverse_num(n) == n) flag = 1;
  return flag;
}

int main(){
    int n;
 
    cout << (">> Nhap so tu nhien= ");
    cin >>  n;

    int check = symmetrical_num(n);
 
    if( check == 1 ) cout << n << " la so doi xung";
    else cout << n << " khong phai la la so doi xung";
    return 0;
}