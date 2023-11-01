#include <stdio.h>
int main() {
    int detik, jam, menit, sisa_detik;
    scanf("%d", &detik);
    jam = detik / 3600;  
    sisa_detik = detik % 3600;
    menit = sisa_detik / 60; 
    sisa_detik = sisa_detik % 60;
    if (jam > 24) {
        int hari = jam / 24; 
        jam = jam % 24;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, sisa_detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, sisa_detik);
    }
    return 0;
}
