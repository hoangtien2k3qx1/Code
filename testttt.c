#include <stdio.h>

int input_Array(int n, int arr[])
{
    // 1:
    do
    {
        printf("\nNhap vao n = ");
        scanf("%d", &n);
        if (n > 100)
        {
            printf("Xin nhap lai gia tri n :");
        }
    } while (n > 100);
    
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // 2:
    printf("\nCac phan tu cua mang : ");
    for (int i = 0; i < n; i++) {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
    printf ("Cac phan tu chan : ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf ("%d ", arr[i]);
        }
    }

}

int main()
{
    int n, arr[100];
    input_Array(n, arr);


    return 0;
}