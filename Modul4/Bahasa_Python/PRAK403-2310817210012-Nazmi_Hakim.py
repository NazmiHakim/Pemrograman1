a, b = map(int, input().split())

if a < b:
    c = a
    d = b
    while c <= b and d >= a:
        print(f"{c} {d}", end=" - " if c < b else "")
        c += 1
        d -= 1

else:
    c = a
    d = b
    while c >= b and d <= a:
        print(f"{c} {d}", end=" - " if c > b else "")
        c -= 1
        d += 1

print("\b\b")
