
#include<stdio.h>
#include<math.h>

struct solution {
    int size;
} arr_integer;

void solution () {
    for (int i=0; i<3; i++) {
        printf ("%d ", arr_integer.size + 1);
        arr_integer.size += 1;
    }
}
int main() {
    solution();
    return 0;
}