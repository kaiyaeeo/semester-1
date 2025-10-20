# definisi prosedur
def rata_rata():
    jumlah = 0
    for i in range(5):
        angka_str= input(f"Angka ke-{i + 1}: ")
        angka = int(angka_str)
        jumlah += angka
    print(f"jumlah: {jumlah}")
    hasil = jumlah / 5
    print(f"rata-rata: {hasil}")
# pemanggilan prosedur
rata_rata()