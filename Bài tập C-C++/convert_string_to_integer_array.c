
// convert string to integer array in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* convert(char* c)
{
	int len=strlen(c),i;
	int *a = (int*) malloc(len * sizeof(int));
	for(i = 0; i < len; i++)
		a[i] = c[i] - 48;
	return a;
}

int main(int argc, char const *argv[])
{
	char c[100];
    printf ("Nhap vao chuoi: ");
	scanf("%s",c);
	int *a = convert(c);
    printf ("Convert string to integer array: ");
    for (int i = 0; i < strlen(c); i++) {
        printf ("%d", a[i]);
    }
	free(a);
	return 0;
}