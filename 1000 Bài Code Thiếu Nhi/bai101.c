
// kiểm tra xem tháng đó có bao nhiêu ngày.

#include<stdio.h>

int ngay(int month, int year) {
    int NgayTrongNam;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            NgayTrongNam = 31;
            break;
        case 4: case 6: case 9: case 11:
            NgayTrongNam = 30;
            break;
        default:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                NgayTrongNam = 29;
            } else {
                NgayTrongNam = 28;
            }
            break;
    }
    return NgayTrongNam;
}

int main(){
    int month, year;
    printf ("Nhap vao month = ");
    scanf ("%d", &month);
    printf ("Nhap vao year = ");
    scanf ("%d", &year);
    printf ("Co %d ngay !", ngay(month, year));
    return 0;
}