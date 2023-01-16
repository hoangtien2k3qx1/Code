
/*
    Viết chương trình nhập vào 6 số a, b, c, d, e, f . Giai và biện luận hệ phương trình có dạng:
        a.x + b.y = c
        d.x + e.y = f

    PP Cramer giải BPT 2 ẩn

*/

#include<stdio.h>
#include<math.h>
 
int main(){
    int a, b, c, d, e, f;
    float D, Dx, Dy, x, y;
    printf("a*x + b*y = c\n");
    printf("d*x + e*y = f\n");
    printf("\nNhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    printf("Nhap c: "); scanf("%d", &c);
    printf("Nhap d: "); scanf("%d", &d);
    printf("Nhap e: "); scanf("%d", &e);
    printf("Nhap f: "); scanf("%d", &f);
    D = a * e - b * d;
    Dx = c * e - b * f;
    Dy = a * f - c * d;
    if (D == 0) {
        if (Dx + Dy == 0)
            printf("He phuong trinh co vo so nghiem");
        else
            printf("He phuong trinh vo nghiem");
    }
    else {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem: ");
        printf ("\nx = %.2f\n", x);
        printf ("y = %.2f\n", y);
    }
    return 0;
}



/*
#include <stdio.h>

int main() {
	float a1, b1, c1, a2, b2, c2, dx, dy, d;
	printf( "Nhap a1, b1, c1: " );
	scanf( "%f%f%f", &a1, &b1, &c1 );
	printf( "Nhap a2, b2, c2: " );
	scanf( "%f%f%f", &a2, &b2, &c2 );

	d = ( a1 * b2 - a2 * b1 );
	dx = ( c1 * b2 - c2 * b1 );
	dy = ( a1 * c2 - a2 * c1 );
	if ( !d ) printf( ( !dx && !dy ) ? "Vo dinh\n" : "Vo nghiem\n" );
	else printf( "x = %g\ny = %g\n", dx / d, dy / d );
	
	return 0;
}
*/