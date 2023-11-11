def main():
    masuk = input()
    angka, simbol = masuk.split()
    angka = int(angka)
    
    angkalwnsimbol = [simbol if i % angka == 0 else str(i) for i in range(1, 51)]
    
    print(" ".join(angkalwnsimbol))

if __name__ == "__main__":
    main()
