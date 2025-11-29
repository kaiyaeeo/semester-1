#include <stdio.h>
int main() {
    int a = 10;
    if (a>5) {
        printf("Nilai a lebih besar dari 10\n");
    }else if (a == 10) {
        printf("Nilai a lebih kecil atau sama dengan 10\n");
    }else {
        printf("Nilai a lebih kecil dari 10\n");
    }
    return 0;
}