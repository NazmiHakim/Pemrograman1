def max_bilangan(a, b, c, d):
    maksimum = a
    if b > maksimum:
        maksimum = b
    if c > maksimum:
        maksimum = c
    if d > maksimum:
        maksimum = d
    return maksimum

if __name__ == "__main__":
    a, b, c, d = map(int, input().split())
    hasil = max_bilangan(a, b, c, d)
    print(hasil)