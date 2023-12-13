def buatmatriks(baris, kolom, isi):
    matriks = []
    index = 0

    for i in range(baris):
        barismatriks = []
        for j in range(kolom):
            barismatriks.append(int(isi[index]))
            index += 1
        matriks.append(barismatriks)

    return matriks

def cetakmatriks(matriks):
    for baris in matriks:
        for elemen in baris:
            print(elemen, end=' ')
        print()

baris, kolom = map(int, input().split())
elemenmatriks = input().split()
matriks = buatmatriks(baris, kolom, elemenmatriks)
cetakmatriks(matriks)