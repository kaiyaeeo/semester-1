#include <stdio.h>
//program menjumlahkan semua bilangan dari 1 hingga bilangan yang diinput oleh pengguna
int main()
{
    int jumlah = 0;
    int angka, i = 0;

    printf("Masukan angka: ");
    scanf("%d", &angka);

    while(i<=angka){
        jumlah+= i;i++;
    } printf("jumlah: %d", jumlah);

    return 0;

}