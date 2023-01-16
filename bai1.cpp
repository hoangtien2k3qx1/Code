
// Tìm n sao cho : 1 + 2 + 3 + ... + n > 10000

#include<iostream>
int sum = 0, i;
int Element() {
    for (i=1; i != 0; i++){
        sum += i;
        if (sum > 10000) 
            break;       
    }
    return i;
}
int main() {
    std::cout << Element();
    return 0;
}







