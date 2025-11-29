/*
Program menghitung jumlah angka
I.S : Program meminta pengguna memasukkan angka dengan jumlah angka kurang dari 10
F.S : Program mencetak berapa banyak angka yang dimasukkan pengguna
*/
#include <iostream>
using namespace std;

int main ()
{
    int bil;
    int jumlah_angka = 0;

    cout<<"masukan angka positif: ";
    cin>>bil;

    if (bil==0){
        jumlah_angka = 1;
    }

    while (bil > 0) {
        jumlah_angka++;
        bil = bil/10;
    }
    cout<<"Jumlah angka adalah: "<<jumlah_angka<<endl;



    return 0;
}