#include <iostream>
using namespace std;

int main ()
{
    int i, hari;
    int benih_lele = 20;
    int pakan = 0;
    int lele_dewasa = 0;
    int jual_lele = 0, jml_lele_dewasa = 0;

    cout<<"Masukkan hari: ";
    cin>>hari;

    for (i=0; i<hari; i++){
        int hari_ke = i + 1;
        if (hari_ke%2==0){
            pakan = pakan + 250;
        } else {
            pakan = pakan + 150;
        }
        if(hari_ke%3==0){
            lele_dewasa = lele_dewasa + 4;
            benih_lele = benih_lele - 4;
            jml_lele_dewasa = jml_lele_dewasa + 4;
        }
        if(hari_ke%5==0){
            if(benih_lele<=10){
                benih_lele = benih_lele + 5;
            }
        }
        if(hari_ke%7==0){
            jual_lele = jual_lele + (lele_dewasa * 4000);
            lele_dewasa = 0;
        }
    }
    cout<<"Jumlah benih lele yang tersisa: "<<benih_lele<<" ekor\n";
    cout<<"Jumlah lele dewasa keseluruhan: "<<jml_lele_dewasa<<" ekor\n";
    cout<<"Total pakan yang diberikan: "<<pakan<<" gram\n";
    cout<<"Total pendapatan: "<<jual_lele<<endl;

    return 0;
}