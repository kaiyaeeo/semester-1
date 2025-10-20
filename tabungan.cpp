#include <iostream>
using namespace std;

int main()
{
int target;
int tabungan;
int capaian;
int total_tabungan;
    
cout<<"target tabungan:";
cin>>target;
    
do {
    
    cout<<"tabungan bulan ini:";
    cin>>tabungan;
    total_tabungan += tabungan;
    cout<<"total tabungan anda saat ini : "<<total_tabungan<<"\n";
    capaian = target-total_tabungan;
    
}
    
while (capaian >= 0); 
    cout<<"selamat target tabungan anda telah tercapai!";
    
    
    

return 0;
}
