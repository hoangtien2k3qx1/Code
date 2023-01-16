/*
#include<math.h>
làm tròn số lên dùng "ceil"
làm tròn số xuống dùng "floor"

*/

#include <iostream>
#include <math.h>
int main()
{
    float n, s;
    std:: cout << "nhap vao n = ";
    std::cin >> n;
    s = ceil(n);

    std::cout << s << std::endl;
    std:: cout << "\n" << floor(n);
    return 0;
}