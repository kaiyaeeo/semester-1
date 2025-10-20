#definisi fungsi
def faktorial(a):
    angka = 1
    for i in range(1, a+1):
        angka *= i
    return angka

#memanggil fungsi
hasil = faktorial(9)
print(f"Faktorial dari 9 adalah {hasil}")