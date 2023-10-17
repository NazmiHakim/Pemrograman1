#include <stdio.h>

int main() {
    float nilai_keberapa, nilai_ketau;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai_keberapa);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai_ketau);
    float hasil = nilai_pertama + nilai_kedua;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai_pertama, nilai_kedua, hasil);
    return 0;
}