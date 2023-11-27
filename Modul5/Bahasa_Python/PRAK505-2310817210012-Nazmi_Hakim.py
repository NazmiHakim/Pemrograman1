def biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2023
    usia = tahun_sekarang - tahun_lahir

    print("Perkenalkan Nama Saya :", nama)
    print("Umur Saya :", usia)
    print("Saya Adalah Angkatan :", tahun_sekarang)
    print("Asal Saya dari :", asal)

if __name__ == "__main__":
    tahun_lahir = int(input())
    nama = input()
    asal = input()

    biodata(tahun_lahir, nama, asal)