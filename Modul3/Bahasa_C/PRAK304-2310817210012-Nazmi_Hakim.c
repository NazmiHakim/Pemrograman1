#include <stdio.h>
int main() {
    int nilai;
    scanf("%d", &nilai);
    if (nilai == 0) {
        printf("Nol");
    } else if (nilai > 0 && nilai < 10) {
        printf("Satuan");
    } else if (nilai >= 10 && nilai < 20) {
        printf("Belasan");
    } else if (nilai >= 20 && nilai < 100) {
        printf("Puluhan");
    } else if (nilai >= 100)
        printf("Anda Menginput Melebihi Limit Bilangan");
    return 0;
}


