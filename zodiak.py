from datetime import datetime

# Input dari user
tanggal = int(input("Masukan tanggal lahir: "))
bulan = int(input("Masukan bulan lahir (1-12): "))
tahun = int(input("Masukan tahun lahir: "))

# Hitung usia
today = datetime.now()
birth_date = datetime(tahun, bulan, tanggal)
age = today.year - birth_date.year - ((today.month, today.day) < (birth_date.month, birth_date.day))

# Cek usia
if age < 17:
    print("Maaf, Anda belum cukup umur (di bawah 17 tahun).")
else:
    # Tentukan zodiak
    if (bulan == 12 and tanggal >= 22) or (bulan == 1 and tanggal <= 19):
        zodiak = "Capricorn"
    elif (bulan == 1 and tanggal >= 20) or (bulan == 2 and tanggal <= 18):
        zodiak = "Aquarius"
    elif (bulan == 2 and tanggal >= 19) or (bulan == 3 and tanggal <= 20):
        zodiak = "Pisces"
    elif (bulan == 3 and tanggal >= 21) or (bulan == 4 and tanggal <= 19):
        zodiak = "Aries"
    elif (bulan == 4 and tanggal >= 20) or (bulan == 5 and tanggal <= 20):
        zodiak = "Taurus"
    elif (bulan == 5 and tanggal >= 21) or (bulan == 6 and tanggal <= 20):
        zodiak = "Gemini"
    elif (bulan == 6 and tanggal >= 21) or (bulan == 7 and tanggal <= 22):
        zodiak = "Cancer"
    elif (bulan == 7 and tanggal >= 23) or (bulan == 8 and tanggal <= 22):
        zodiak = "Leo"
    elif (bulan == 8 and tanggal >= 23) or (bulan == 9 and tanggal <= 22):
        zodiak = "Virgo"
    elif (bulan == 9 and tanggal >= 23) or (bulan == 10 and tanggal <= 22):
        zodiak = "Libra"
    elif (bulan == 10 and tanggal >= 23) or (bulan == 11 and tanggal <= 21):
        zodiak = "Scorpio"
    else:
        zodiak = "Sagitarius"  # Untuk tanggal 22 November - 21 Desember
    
    print(f"Zodiak Anda adalah: {zodiak}")
    print(f"Usia Anda: {age} tahun")