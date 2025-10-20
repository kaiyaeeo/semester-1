#mengecek temperatur
temp = int(input("masukkan temperature:"))

if (temp>30):
    print(f"cuaca dingin")
elif (temp>=20 and temp<=30):
    print(f"cuaca hangat")
else:
    print(f"cuaca dingin")
