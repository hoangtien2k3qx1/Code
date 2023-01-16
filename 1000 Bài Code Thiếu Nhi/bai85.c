/*
    Quý 1 trong năm bắt đầu từ tháng 1 đến hết tháng 2, 
    Quý 2 trong năm bắt đầu từ tháng 4 đến hết tháng 6, 
    quý 3 trong năm bắt đầu từ tháng 7 đến hết tháng 9, 
    quý 4 trong năm bắt đầu từ tháng 10 đến hết tháng 12

*/
#include<stdio.h>
#include<math.h>

int main() {
    int month;
    scanf ("%d", &month);

    switch(month) {
        case 1:
            printf ("Quy 1");
            break;
        case 2:
            printf ("Quy 1");
            break;
        case 4:
            printf ("Quy 2");
            break;
        case 5:
            printf ("Quy 2");
            break;
        case 6:
            printf ("Quy 2");
            break;
        case 7:
            printf ("Quy 3");
            break;
        case 8:
            printf ("Quy 3");
            break;
        case 9:
            printf ("Quy 3");
            break;
        case 10:
            printf ("Quy 4");
            break;
        case 11:
            printf ("Quy 4");
            break;
        case 12:
            printf ("Quy 4");
            break;
        default:
            printf ("Error");
            break;
    }

    return 0;
}