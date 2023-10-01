#include <stdio.h>
int main() {
    int a= 4,b= 5,c= 7,d= a + b + c,e = 85000,f = d * e;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", d);
    printf("Harga tanah Per Meter adalah %d\n", e);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", f);
    return 0;
}
