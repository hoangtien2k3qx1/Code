//  bài toán xếp loại học sinh
/*
 nhập vào điểm 3 môn của một học sinh
Toán , Văn , Anh  và viết chương trình đưa ra xếp loại của một học sinh theo điểm trung bình như sau :

Điểm Trung Bình = ( điểm toán + điểm văn + điểm anh) / 3 ;

nếu ĐTB nằm trong khoảng : [0 -> 4.0) => yếu
nếu ĐTB nằm trong khoảng : [4.0 -> 6.5) => trung bình
nếu ĐTB nằm trong khoảng : [6.5 -> 8.0) => khá
nếu ĐTB nằm trong khoảng : [8.0 -> 10] =>giỏi

*/

#define GIOI "\nXep loai Gioi"
#define KHA "\nXep loai Kha"
#define TB "\nXep loai Trung Binh"
#define YEU "\nXep loai Yeu"

#include <stdio.h>

int main() {
    float Toan;
    float Van;
    float Anh;
    float TrungBinh;

    printf ("nhap vao diem Toan : ");
    scanf ("%f", &Toan);
    printf ("\nnhap vao diem Van :");
    scanf ("%f", &Van);
    printf ("\nnhap vao diem Anh : ");
    scanf ("%f", &Anh);

    TrungBinh = (Toan + Van + Anh) / 3;
    // printf ("%f",TrungBinh);
    printf ("\ndiem trung binh 3 mon : %.2f", TrungBinh);

    if (TrungBinh < 4.0) {
        printf (YEU);
    } else if (TrungBinh < 6.5) {
        printf (TB);
    } else if (TrungBinh < 8.0) {
        printf (KHA);
    } else {
        printf (GIOI);
    }

    // syteam "pause";
    return 0;

}