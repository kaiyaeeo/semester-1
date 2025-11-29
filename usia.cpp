/*
Program mengecek usia yang valid
I.S : Program meminta user menginput usia user
F.S : Program akan memberikan output "Usia yang dimasukkan valid: [Usia]". jika usia yang diinput user lebih dari 0 
F.S : Program akan memberikan output ("Usia harus lebih dari 0. Coba lagi!") 
*/
#include <iostream>
using namespace std;

int main ()
{
    int usia;

    do {
        cout<<"Masukkan usia anda: ";
        cin>>usia;
        if (usia<=0) {
            cout<<"Usia harus lebih dari 0. Coba lagi!"<<endl;
        }
    } while (usia <= 0);
    cout<<"Usia yang dimasukkan valid: "<<usia<<endl;


    return 0;
}