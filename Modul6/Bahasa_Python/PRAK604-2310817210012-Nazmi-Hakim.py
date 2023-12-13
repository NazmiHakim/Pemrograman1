def koderahasia(pesan, kode):
    pesansimbol = [''] * 100
    bintang = 0
    pagar = 0
    panjang_pesan = len(pesan)
    panjang_kode = len(kode)

    if panjang_pesan != panjang_kode:
        print("Panjang kalimat berbeda, pesan palsu")
        return

    for i in range(panjang_pesan):
        if kode[i] == pesan[i]:
            pesansimbol[i] = ' ' if pesan[i] == ' ' else '*'
            bintang += pesan[i] != ' '
        else:
            pesansimbol[i] = '#'
            pagar += 1

    print(''.join(pesansimbol))
    print(f'* = {bintang}')
    print(f'# = {pagar}')
    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

def main():
    pesan = input().rstrip()
    kode = input().rstrip()
    koderahasia(pesan, kode)

if __name__ == "__main__":
    main()