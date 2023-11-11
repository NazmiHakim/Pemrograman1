angka = int(input())

for i in range(1, angka + 1, 2):
    print(i, end=" ")

print()
for i in range(angka, 1, -2):
    print(i, end=" ")