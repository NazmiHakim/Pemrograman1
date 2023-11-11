n, kelipatan = map(int, input().split())

total = 0
for i in range(1, n + 1):
    jbaris = 0
    for j in range(i, 0, -1):
        print(f"({j} * {kelipatan})", end='')
        jbaris += j * kelipatan
        if j > 1:
            print(" + ", end='')
    total += jbaris
    print(f" = {jbaris}")

print(total)