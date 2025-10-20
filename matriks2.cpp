#include <iostream>
using namespace std;

int main()
{

    int angka [2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
    for(int i = 0 ; i<2 ; i++) {
        for(int j=0 ; j<2; j++){
            for(int k = 0; k<2; k++){
                cout<< angka[i][j][k]<<" ";
            }
        }
        cout<<"\n";
    }

    // Deklarasi Matriks A dan B (dari data 3D Anda, diambil 2 matriks pertama)
    int matriks_a[2][2] = {{1, 2}, {3, 4}};
    int matriks_b[2][2] = {{5, 6}, {7, 8}};
    int matriks_hasil[2][2]; // Matriks untuk menyimpan C = A * B
    int i, j, k;
    int hasil_sementara;

    // --- Proses Perkalian Matriks (C[i][j] = SUM(A[i][k] * B[k][j])) ---
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            hasil_sementara=0;// WAJIB DIRESET untuk setiap elemen C[i][j]
            for(k = 0; k < 2; k++) {
                // Perhitungan C[i][j]
                hasil_sementara += matriks_a[i][k] * matriks_b[k][j];
            }
            matriks_hasil[i][j] = hasil_sementara;
        }   
    }

    // --- Menampilkan Hasil ---
    cout << "Hasil perkalian matriks A * B: "<<"\n ";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << matriks_hasil[i][j]<<" ";
        }
        cout << "\n";
    }

    return 0;
}