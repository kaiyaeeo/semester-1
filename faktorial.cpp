//program menentukan hasil penambahan faktorial bilangan ganjil antara 1-6
#include <iostream>
using namespace std;
int main()
{
    int i,j,hasil,jml;
    jml = 0;
    for (j=1; j<=6; j++){
        if ((j%2) != 0){
            hasil = 1;
            for(i=1; i<= j; i++){
                hasil=hasil*i;
            } jml = jml+hasil;
        }
    }
    cout<<jml;
    return 0;
}