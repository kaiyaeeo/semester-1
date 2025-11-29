#include <stdio.h>
void tukar (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    printf("Sebelum ditukar: a = %d, b = %d\n", a,b);
    tukar(&a, &b);
    printf("Setelah ditukar: a = %d, b = %d\n", a,b);
    return 0;
}