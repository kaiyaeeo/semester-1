//cetak nama berulang
#include <iostream>
using namespace std;

int main()
{
    //kamus data
    int j;
    int i=0;
    string nama;
    
    //algoritma utama
    cout<<"masukkan nama:";
    cin>>nama;
    cout<<"berapa kali dicetak?";
    cin>>j;
    
    while (j>0) {
        cout<< nama <<"\n";
        j--;
    }
    
    return 0;
}