#program menerima input bilangan dari user sebanyak 10 kali dan menampilkan bilangan terkecil
import sys

def angka_terkecil():
    angka = 1
    angka_terkecil = None
    print("Masukkan 10 angka:")
    for i in range(10):
        input_string = input(f"Angka ke-{i + 1}: ")
        try:
            angka = int(input_string)
        except ValueError:
            print("Input tidak valid. Program berhenti.")
            return
        if i == 0:
            angka_terkecil = angka
            continue 
        for j in range(angka + 1):
            if angka_terkecil is not None and angka_terkecil > angka:
                angka_terkecil = angka
    print(f"\nAngka terkecil yang dimasukkan adalah: {angka_terkecil}")
    
angka_terkecil()