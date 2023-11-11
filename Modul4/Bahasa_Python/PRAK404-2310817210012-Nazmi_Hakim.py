while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihanku = int(input("Masukkan Pilihan: "))

    if pilihanku == 5:
        print("Terimakasih, telah menggunakan kalkulator Nazmi Hakim")
        break
    elif pilihanku < 1 or pilihanku > 4:
        print("Input Anda salah, silakan coba lagi")
        continue

    nilai_pertama = float(input("Masukkan nilai pertama: "))
    nilai_kedua = float(input("Masukkan nilai kedua: "))

    if pilihanku == 1:
        hasiloperasi = nilai_pertama + nilai_kedua
        operasi = "Penjumlahan"
    elif pilihanku == 2:
        hasiloperasi = nilai_pertama - nilai_kedua
        operasi = "Pengurangan"
    elif pilihanku == 3:
        hasiloperasi = nilai_pertama * nilai_kedua
        operasi = "Perkalian"
    elif pilihanku == 4:
        if nilai_kedua == 0:
            hasiloperasi = 0
        operasi = "Pembagian"

    print(f"Hasil {operasi} antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasiloperasi:.2f}")