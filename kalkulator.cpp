#include <iostream>
using namespace std;

int main ()
{
    int bil_pertama, bil_kedua, hasil;
    string operasi;

    cout<<"masukkan angka pertama: ";
    cin>>bil_pertama;
    cout<<"pilih operasi bilangan: ";
    cin>>operasi;
    cout<<"masukkan angka kedua: ";
    cin>>bil_kedua;

    if (operasi == "+") {
        hasil = bil_pertama + bil_kedua;
    } else if (operasi == "-") {
        hasil = bil_pertama - bil_kedua;
    } else if (operasi == "*") {
        hasil = bil_pertama * bil_kedua;
    } else if (operasi == "/") {
        hasil = bil_pertama / bil_kedua;
    } else {
        hasil = 0;
    }

    cout<<"hasilnya adalah: "<<hasil<<endl;
    
    return 0;
}