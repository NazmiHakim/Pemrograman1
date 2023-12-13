def jumlahzetsu(ruangan, zetsu):
    hasil=[]
    for i in range(ruangan):
        hasil.append(zetsu[i]*(i+1))
    return hasil

ruangan=int(input())
zetsu=list(map(int, input().split()))
hasil= jumlahzetsu(ruangan, zetsu)
print(" ".join(map(str, hasil)))