#include <stdio.h>

int main() {
    int angka;

    scanf("%d", &angka);
    
    int i = 1;
    while (i <= angka) {
        printf("%d ", i);
        i += 2;
    }

    printf("\n");

    if (angka % 2 != 0) {
        angka--;
    }

    i = angka;
    while (i >= 2) {
        printf("%d ", i);
        i -= 2;
    }

    return 0;
}
