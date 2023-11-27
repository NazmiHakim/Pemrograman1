def reverse(angka):
    dibalik = 0
    while angka > 0:
        dibalik = dibalik * 10 + angka % 10
        angka //= 10
    return dibalik

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))