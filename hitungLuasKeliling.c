#include <stdio.h>
void hitungLuasKeliling(int panjang, int lebar,  int* luas, int* keliling) {
    *luas = panjang * lebar;
    *keliling = 2 * (panjang + lebar);
}

int main () {
    int p, l;
    int luas, keliling;
    printf("Masukkan nilai panjang: ");
    scanf("%d", &p);
    printf("Masukkan nilai lebar: ");
    scanf("%d", &l);
    hitungLuasKeliling(p, l, &luas , &keliling);
    printf("Luas: %d\n", luas);
    printf("Keliling: %d", keliling);
    return 0;
}