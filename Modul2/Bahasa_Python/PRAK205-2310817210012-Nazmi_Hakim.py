import math
AKU, BENCI = map(int, input().split())
CIRENGUDANG = int(math.sqrt(BENCI**2 - AKU**2))
KELILING = AKU + BENCI + CIRENGUDANG
LUAS = (CIRENGUDANG * AKU) // 2
print(f"Alas : {CIRENGUDANG} cm")
print(f"Tinggi : {AKU} cm")
print(f"Keliling : {KELILING} cm")
print(f"Luas : {LUAS} cm^2")
