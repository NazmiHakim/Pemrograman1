def maksimal(a, b):
    return b if b > a else a

def minimal(a, b):
    return b if b < a else a

if __name__ == "__main__":
    bilangan = int(input())
    nilai = list(map(int, input().split()))

    batas = 0
    maks = -100000
    minim = 100000

    while batas < bilangan:
        nilai_input = nilai[batas]
        maks = maksimal(maks, nilai_input)
        minim = minimal(minim, nilai_input)
        batas += 1

    print(f"{maks} {minim}")