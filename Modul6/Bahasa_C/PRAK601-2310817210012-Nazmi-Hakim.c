#include <stdio.h>

void buat_matriks(int baris, int kolom, int isi[], int matriks[baris][kolom]) {
    int index = 0;

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            matriks[i][j] = isi[index++];
        }
    }
}

void cetak_matriks(int baris, int kolom, int matriks[baris][kolom]) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);

    int elemenmatriks[baris * kolom];
    for (int i = 0; i < baris * kolom; i++) {
        scanf("%d", &elemenmatriks[i]);
    }

    int matriks[baris][kolom];
    buat_matriks(baris, kolom, elemenmatriks, matriks);

    cetak_matriks(baris, kolom, matriks);
    return 0;
}