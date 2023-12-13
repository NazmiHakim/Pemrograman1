def perkalian(matrixa, matrixb):
    result = [[0 for _ in range(len(matrixa))] for _ in range(len(matrixa))]

    for i in range(len(matrixa)):
        for j in range(len(matrixa)):
            for k in range(len(matrixa)):
                result[i][j] += matrixa[i][k] * matrixb[k][j]

    return result

def inputmatrix(n):
    matrix = []
    for _ in range(n):
        baris = list(map(int, input().split()))
        matrix.append(baris)
    return matrix

def cetakmatrix(matrix):
    for baris in matrix:
        print(" ".join(map(str, baris)))

n = int(input())
print("Matriks A")
matrixa = inputmatrix(n)
print("Matriks B")
matrixb = inputmatrix(n)
hasilmatrix = perkalian(matrixa, matrixb)
print("Matriks AXB")
cetakmatrix(hasilmatrix)