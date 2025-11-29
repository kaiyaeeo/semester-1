#include <stdio.h>
int main() {
    int a;
    printf ("masukkan nilai ujian: ");
    scanf("%d", &a);
    if ((a>=85) && (a<=100)) {
        printf("A\n");
    }else if ((a>=70) && (a<85)) {
        printf("B\n");
    }else if ((a>=50) && (a<70)) {
        printf("C\n");
    }else if (a<50) {
        printf("D\n");
    }else {
        printf("\n");
    }
    return 0;
}