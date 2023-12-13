def perkalian(baris1, baris2):
    if len(baris1) != len(baris2):
        return "Jumlah tidak sama"
    
    hasil = []
    for i in range(len(baris1)):
        hasil.append(baris1[i] * baris2[i])
    
    return hasil

n1, n2 = map(int, input().split())
if n1 != n2:
    print("Jumlah tidak sama")
else:
    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))
    hasil_perkalian = perkalian(baris1, baris2)
    print(" ".join(map(str, hasil_perkalian)))