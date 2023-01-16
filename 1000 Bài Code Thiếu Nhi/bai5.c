
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    float sum = 0;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++) {
        if (i % 2 != 0) {
            sum += 1.0/(2*i+1);
        }
    }
    printf ("%f", sum);


    getch();
    return 0;
}