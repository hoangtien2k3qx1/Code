
#include<stdio.h>
#include<conio.h>

int main() {
    int n, sum=1;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++) {
        sum *= i;
    }
    printf ("%d! = %d",n, sum);
    getch();
    return 0;
}