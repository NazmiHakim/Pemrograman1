#include <stdio.h>

void perkalian(int baris1[], int baris2[], int n) {
    int hasil[n];
    
    for (int i = 0; i < n; i++) {
        hasil[i] = baris1[i] * baris2[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", hasil[i]);
    }
}

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int baris1[n1];
        for (int i = 0; i < n1; i++) {
            scanf("%d", &baris1[i]);
        }

        int baris2[n2];
        for (int i = 0; i < n2; i++) {
            scanf("%d", &baris2[i]);
        }

        perkalian(baris1, baris2, n1);
    }
    return 0;
}