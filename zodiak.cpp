/*
program menentukan zodiak
I.S : program meminta user memasukan tanggal, bulan, dan tahun lahir
F.S : program mencetak zodiak user jika usia user di atas atau sama dengan 17 tahun
F.S : program mencetak "anda masih di bawah umur" jika usia user masih di bawah 17 tahun
*/
#include <iostream>
using namespace std;

//kamus data

    int tanggal_lahir;
    int bulan_lahir;
    int tahun_lahir;
    char zodiak;

//algoritma utama
int main()
{
    int tanggal_lahir;
    cout<<"masukan tanggal_lahir:";
    cin>>tanggal_lahir;
    int bulan_lahir;
    cout<<"masukan bulan_lahir:";
    cin>>bulan_lahir;
    int tahun_lahir;
    cout<<"masukan tahun_lahir:";
    cin>>tahun_lahir;
    
if (bulan_lahir >= 9 && tahun_lahir > 2008) {
    cout<<"anda belum cukup umur";
}
else {
    
    if ((bulan_lahir == 12 && tanggal_lahir >= 22) || (bulan_lahir == 1 && tanggal_lahir <= 19)) {
        cout<<"zodiak = Capricorn";
    }
    else if ((bulan_lahir == 1 && tanggal_lahir >= 20) || (bulan_lahir == 2 && tanggal_lahir <= 18)) {
            cout<<"zodiak = Aquarius";
    }
    else if ((bulan_lahir == 2 && tanggal_lahir >= 19) || (bulan_lahir == 3 && tanggal_lahir <= 20)){
            cout<<"zodiak = Pisces";
    }
    else if ((bulan_lahir == 3 && tanggal_lahir >= 21) || (bulan_lahir == 4 && tanggal_lahir <= 19)) {
            cout<<"zodiak = Aries";
    }
    else if ((bulan_lahir == 4 && tanggal_lahir >= 20) || (bulan_lahir == 5 && tanggal_lahir <= 20)) {
            cout<<"zodiak = Taurus";
    }
    else if ((bulan_lahir == 5 && tanggal_lahir >= 21) || (bulan_lahir == 6 && tanggal_lahir <= 20)) {
            cout<<"zodiak = Gemini";
    }
    else if ((bulan_lahir == 6 && tanggal_lahir >= 21) || (bulan_lahir == 7 && tanggal_lahir <= 22)) {
            cout<<"zodiak = Cancer";
    }
    else if ((bulan_lahir == 7 && tanggal_lahir >= 23) || (bulan_lahir == 8 && tanggal_lahir <= 22)) {
            cout<<"zodiak = Leo";
    }
    else if ((bulan_lahir == 8 && tanggal_lahir >= 23) || (bulan_lahir == 9 && tanggal_lahir <= 22)) {
            cout<<"zodiak = Virgo";
    }
    else if ((bulan_lahir == 9 && tanggal_lahir >= 23) || (bulan_lahir == 10 && tanggal_lahir <= 22)) {
            cout<<"zodiak = Libra";
    }       
    else if ((bulan_lahir == 10 && tanggal_lahir >= 23) || (bulan_lahir == 11 && tanggal_lahir <= 21)){
            cout<<"zodiak = Scorpio";
    }       
    else {
            cout<< "zodiak = Sagitarius";  
        }
        
}
    return 0;
}