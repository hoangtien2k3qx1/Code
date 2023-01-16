
// giải bất phương trình bằng pp Cramer

#include<stdio.h>
#include<math.h>
#include<conio.h>

int GiaiBatPhuongTrinh(float a, float b, float c, float d, float e, float f) {
    float D, Dx, Dy;
    D = (a*e - d*b);
    Dx = (c*e - f*b);
    Dy = (a*f - d*c);
    if (D==0) {
        // lưu ý: D==0 và Dx+Dy==0 thì pt vô số nghiệm
        // lưu ý: D==0 và Dx+Dy!=0 thì pt vô nghiệm
        if (Dx + Dy == 0) {
            printf ("Phuong trinh vo so nghiem");
        } else {
            printf ("Phuong trinh vo nghiem");
        }
    } else {
        printf ("x = %f\n", Dx/D);
        printf ("y = %f", Dy/D);
    }
}
    
int main() {
    float a, b, c, d, e, f;
    scanf ("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    GiaiBatPhuongTrinh(a, b, c, d, e, f);
    return 0;
}