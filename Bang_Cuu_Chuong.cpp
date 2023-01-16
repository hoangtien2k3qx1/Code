// viết chương trình in ra bảng cửu chương tra màn hình.

// Lưu ý: 179 ascii là '|'
/*  %2d : Ý nghĩa của việc này là dành cho một số khoảng trống tối thiểu để in 
       con số này ra màn hình. Tối thiểu ở đây nghĩa là lúc nào cũng có sẵn bấy 
       nhiêu khoảng trống đó để dành cho con số mà ta in ra, trường hợp nếu số chữ 
       số lớn hơn số chổ trống thì con số vẫn được in ra đầy đủ.
*/


#include<stdio.h>
int main() {
    for(int i = 1; i <= 10; ++i){
        for(int j = 1; j <= 9; ++j)
            printf("%c %d x %2d = %2d", 179, j, i, i * j);
        printf("%c\n", 179);
    }


    printf("\n\n");
    printf("%c", 179);
    return 0;
}

