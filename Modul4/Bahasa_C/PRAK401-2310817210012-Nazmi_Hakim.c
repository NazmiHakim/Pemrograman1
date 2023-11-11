#include <stdio.h>

int main() {
    int angka;
    char simbyl[2];
    
    scanf("%d %1s", &angka, simbyl);
    for (int i = 1; i <= 50; i++) {
        if (i % angka == 0) {
            printf("%s ", simbyl);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
