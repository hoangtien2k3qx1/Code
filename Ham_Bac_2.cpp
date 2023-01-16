/* Để giải phương trình bậc 2 : ax^2 + bx + c = 0
TH1: a = 0 => bx + c = 0 => b=0, c=0 phương trình vô số nghiệm
                            b=0, c!=0 phương trình vô nghiệm
                            b!=0 phương trình có nghiệm x= -b/c
TH1: a != 0 => ax^2 + bx + c = 0 => giải pt bậc 2
                            delta = b^2 - 4ac
                            TH1: delta > 0
                            x1 = (-b + sqrt(delta))/2a
                            x1 = (-b - sqrt(delta))/2a
                            TH2: delta = 0
                            x = x1 = x2 = -b/2a
                            TH3: delta < 0 => phương trình vô nghiệm
*/

// #include <stdio.h>
// #include <math.h>

// int giaiPT(float a, float b, float c)
// {
//     float delta;
//     if (a == 0)
//     {
//         if (b == 0)
//         {
//             if (c == 0)
//             {
//                 printf ("phuong trinh vo so nghiem");
//             }
//             if (c != 0)
//             {
//                 printf ("phuong trinh vo nghiem");
//             }
//         }
//         if (b != 0)
//         {
//             printf ("x = %.2f", -c / b);
//         }
//     }
//     else // a != 0
//     { 
//         delta = b * b - 4 * a * c;
//         if (delta > 0)
//         {
//             printf ("\nphuong trinh co 2 nghiem phan biet x1, x2 : ");
//             printf ("\nx1 = %.2f", (-b + sqrt(delta)) / (2 * a));
//             printf ("\nx2 = %.2f", (-b - sqrt(delta)) / (2 * a));
//         }
//         if (delta == 0)
//         {
//             printf ("x1 = x2 = %.2f", -b / (2 * a));
//         }
//         if (delta < 0)
//         {
//             printf ("Phuong trinh vo nghiem");
//         }
//     }
//     return 0;
// }

// int main()
// {
//     float a, b, c, delta;
//     printf ("Nhap vao a = ");
//     scanf("%d", &a);
//     printf ("Nhap vao b = ");
//     scanf ("%d", &b);
//     printf ("Nhap vao c = ");
//     scanf ("%d", &c);
//     giaiPT(a, b, c);


//     return 0;
// }



// CÁCH NÀY GIẢI CŨNG RẤT LÀ HAY : CÓ THỂ THAM KHẢO THÊM :
#include <iostream>
#include <math.h>
using namespace std;

int giaiPT(float a, float b, float c, float &x1, float &x2)
{
    float delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        x1 = x2 = 0.0;
        return 0;
    }
    else if (delta == 0)
    {
        x1 = x2 = -b / (2 * a);
        return 1;
    }
    else
    {
        delta = sqrt(delta);
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);
        return 2;
    }
}

int main()
{
    float a, b, c;
    float x1, x2;
    do
    {
        cout << "Nhap a (a!=0): ";
        cin >> a;
        cout << "Nhap b: ";
        cin >> b;
        cout << "Nhap c: ";
        cin >> c;
    } while (!a);
    int numNo = giaiPT(a, b, c, x1, x2);
    if (numNo == 0)
    {
        cout << "Phuong trinh da cho vo nghiem";
    }
    else if (numNo == 1)
    {
        cout << "Phuong trinh da cho co nghiem kep x=%.4f" << x1;
    }
    else
    {
        cout << "Phuong trinh da cho co hai nghiem phan biet" << endl;
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }
}