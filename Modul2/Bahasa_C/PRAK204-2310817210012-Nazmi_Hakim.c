#include <stdio.h>
int main() {
    double jari_jarii, tinggii;
    scanf("%lf %lf", &jari_jarii, &tinggii);
    double volumez = 22.0 / 7.0 * jari_jarii * jari_jarii * tinggii;
    double luas_permukaanz = 2.0 * 22.0 / 7.0 * jari_jarii * (jari_jarii + tinggii);
    double kelilingz = 2.0 * 22.0 / 7.0 * jari_jarii;
    printf("Volume = %.2lf\n", volumez);
    printf("Luas = %.2lf\n", luas_permukaanz);
    printf("Keliling = %.2lf\n", kelilingz);
    return 0;
}
