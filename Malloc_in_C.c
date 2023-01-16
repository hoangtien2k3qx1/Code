#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;
    printf("nhap vao n = ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("khong nam trong bo nho.\n");
        exit(0);
    }
    else
    {
        printf("la malloc.\n");

        for (i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        printf("Cac phan tu trong mang: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
    }

    return 0;
}