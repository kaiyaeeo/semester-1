/*
program daftar belanja sederhana
Anda membuat daftar belanja yang disimpan sebagai array string (misalnya, ["Apel", "Susu", "Roti", "Telur", "Keju"])
Setelah selesai berbelanja, Anda perlu melakukan dua hal:
Periksa apakah item "Susu" ada dalam daftar tersebut. Tampilkan pesan yang sesuai.
Anda menyadari bahwa Anda tidak perlu membeli "Keju". Hapus "Keju" dari array dan tampilkan kembali semua item yang tersisa dalam daftar belanja.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 1. Inisialisasi Daftar Belanja
    vector<string> daftarBelanja = {"Apel", "Susu", "Roti", "Telur", "Keju"};

    cout << "--- Daftar Belanja Awal ---" <<endl;
    for (const string& item : daftarBelanja) {
        cout << "- " << item << endl;
    }
    cout << "---------------------------" <<endl;

    // 2. Periksa Keberadaan Item "Susu"
    cout << "\n--- Pemeriksaan Item: Susu ---" <<endl;
    // std::find mencari item dalam rentang, mengembalikan iterator ke item jika ditemukan, atau end() jika tidak.
    auto itSusu = find(daftarBelanja.begin(), daftarBelanja.end(), "Susu");

    if (itSusu != daftarBelanja.end()) {
        cout << "Item \"Susu\" ada dalam daftar belanja." <<endl;
    } else {
        cout << "Item \"Susu\" TIDAK ada dalam daftar belanja." <<endl;
    }
    cout << "-------------------------------" <<endl;

    // 3. Hapus Item "Keju"
    cout << "\n--- Penghapusan Item: Keju ---" <<endl;
    string itemHapus = "Keju";

    // Cari item "Keju"
    auto itKeju = find(daftarBelanja.begin(), daftarBelanja.end(), itemHapus);

    if (itKeju != daftarBelanja.end()) {
        // Jika ditemukan, hapus elemen tersebut menggunakan iterator
        daftarBelanja.erase(itKeju);
        cout << "Item \"" << itemHapus << "\" berhasil dihapus." <<endl;
    } else {
        cout << "Item \"" << itemHapus << "\" TIDAK ditemukan dalam daftar." <<endl;
    }
    cout << "------------------------------" <<endl;

    // 4. Tampilkan Item yang Tersisa dalam Daftar Belanja
    cout << "\n--- Daftar Belanja Akhir ---" <<endl;
    if (daftarBelanja.empty()) {
        cout << "Daftar belanja kosong." <<endl;
    } else {
        for (const string& item : daftarBelanja) {
            cout << "- " << item <<endl;
        }
    }
    cout << "----------------------------" <<endl;

    return 0;
}