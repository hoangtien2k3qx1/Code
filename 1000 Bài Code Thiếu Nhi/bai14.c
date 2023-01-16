#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i, n;
    float x, T, S;
    i = 1;
    T = 1;
    S = 0;
    scanf("%f", &x);
    scanf("%d", &n);
    while(i <= n)
    {
        T = pow(x, (2 * i +1));
        S = S + T;
        i++;
    }
    printf("\nTong la %f",S);
    getch();
    return 0;
}