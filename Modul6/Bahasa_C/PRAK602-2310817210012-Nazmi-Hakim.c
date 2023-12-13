#include <stdio.h>

void jumlahzetsu(int ruangan, int zetsu[]) {
    int hasil[ruangan];

    for (int i = 0; i < ruangan; i++) {
        hasil[i] = zetsu[i] * (i + 1);
    }

    printf("%d", hasil[0]);
    for (int i = 1; i < ruangan; i++) {
        printf(" %d", hasil[i]);
    }
    printf("\n");
}

int main() {
    int ruangan;
    scanf("%d", &ruangan);

    int zetsu[ruangan];
    for (int i = 0; i < ruangan; i++) {
        scanf("%d", &zetsu[i]);
    }

    jumlahzetsu(ruangan, zetsu);

    return 0;
}