#include <stdio.h>
#include <string.h>

void koderahasia(char pesan[], char kode[]) {
    char pesansimbol[100];
    int bintang = 0, pagar = 0;
    int panjangPesan = strlen(pesan);
    int panjangKode = strlen(kode);

    if (panjangPesan != panjangKode) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return;
    }

    for (int i = 0, panjangPesan = strlen(pesan); i < panjangPesan; i++) {
        if (kode[i] == pesan[i]) {
            pesansimbol[i] = (pesan[i] == ' ') ? ' ' : '*';
            bintang += (pesan[i] != ' ');
        } else {
            pesansimbol[i] = '#';
            pagar++;
        }
    }

    pesansimbol[strlen(pesan)] = '\0';
    printf("%s\n* = %d\n# = %d\n%s\n", pesansimbol, bintang, pagar,
           (bintang >= pagar) ? "Pesan Asli" : "Pesan Palsu");
}

int main() {
    char pesan[100], kode[100];
    fgets(pesan, sizeof(pesan), stdin);
    pesan[strcspn(pesan, "\n")] = '\0';
    fgets(kode, sizeof(kode), stdin);
    kode[strcspn(kode, "\n")] = '\0';
    koderahasia(pesan, kode);
    return 0;
}