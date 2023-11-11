#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        int pilihan;
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Nazmi Hakim\n");
            break;
        } else if (pilihan < 1 || pilihan > 4) {
            printf("Input Anda salah, silakan coba lagi\n");
            continue;
        }

        double npertama, nkedua, hasil;
        printf("Masukkan nilai pertama: ");
        scanf("%lf", &npertama);
        printf("Masukkan nilai kedua: ");
        scanf("%lf", &nkedua);

        char operasi[20];
        if (pilihan == 1) {
            hasil = npertama + nkedua;
            strcpy(operasi, "Penjumlahan");
        } else if (pilihan == 2) {
            hasil = npertama - nkedua;
            strcpy(operasi, "Pengurangan");
        } else if (pilihan == 3) {
            hasil = npertama * nkedua;
            strcpy(operasi, "Perkalian");
        } else if (pilihan == 4) {
            if (nkedua == 0) {
                hasil = 0;
            }
            strcpy(operasi, "Pembagian");
        }

        printf("Hasil %s antara %.2lf dengan %.2lf adalah %.2lf\n", operasi, npertama, nkedua, hasil);
    }

    return 0;
}