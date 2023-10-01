#include <stdio.h>
int main() {
    int a = 5;
    float b = 14;
    float c = b / (a * 2 * 3.14159);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", a);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", b);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", c);
    return 0;
}
