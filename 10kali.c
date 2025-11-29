#include <stdio.h>
//program menerima input bilangan dari user sebanyak 10 kali dan menampilkan bilangan terkecil
int main()
{
    int angka;
    int angka_terkecil;
    int i,j;

    printf("Masukkan 10 angka:\n ");
    for (i=0; i<10; i++){
        scanf("%d", &angka);
        for (j=0; j<=angka; j++){
            if (angka_terkecil>angka){
                angka_terkecil=angka;
            } j++;
        }
    }
    printf("Angka terkecil yang dimasukkan adalah: %d",angka_terkecil);

    return 0;
}