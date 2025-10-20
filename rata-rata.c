#include <stdio.h>
//definisi prosedur
void rata_rata () {
    int jumlah = 0;
    int i, angka;
    float hasil;
    for (i=0; i<5; i++) {
        printf("Masukkan angka ke-%d: \n",i + 1);
        scanf("%d", &angka);
        jumlah = jumlah + angka;
    } 
    hasil = (float)jumlah/5;
    printf("rata-rata: %.2f", hasil);
}
//pemanggilan prosedur
int main ()
{
    rata_rata();

    return 0;
} 