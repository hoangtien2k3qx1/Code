
#include<stdio.h>

void change(int a) {
    a++;
}

int main() {
    int a;
    scanf("%d", &a);
    change(a);
    printf ("%d", a);
    return 0;
}