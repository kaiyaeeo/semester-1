/*
program membuat segitiga bintang
I.S : program meminta user memasukan jumlah baris
F.S : program mencetak segitiga bintang sesuai jumlah baris yang dimasukkan
*/
#include <iostream>
using namespace std;

//algoritma utama

int main()
{
    int j;
    j = 0;
    cout<<"masukan jumlah baris:";
    cin>>j;
    
    for (int i = 1; i <= j; i++) {
        for (int j = i; j>=1 ; j-- ) {
        cout<< "*";
        
        }  
        cout<<endl;
    }

    return 0;
}