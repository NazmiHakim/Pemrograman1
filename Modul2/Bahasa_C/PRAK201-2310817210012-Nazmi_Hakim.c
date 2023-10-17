#include <stdio.h>
#include <string.h>
int main() {
    char namaa[100], nimm[20], kelazz[10], tempattanggal_lahirz[100], alamatz[100], hobbyz[100], no_hpz[20];

    printf("Nama \t\t\t: ");
    gets(namaa);
    printf("NIM \t\t\t: ");
    gets(nimm);
    printf("Kelas Paralel \t\t: ");
    gets(kelazz);
    printf("Tempat/Tanggal Lahir \t: ");
    gets(tempattanggal_lahirz);
    printf("Alamat \t\t\t: ");
    gets(alamatz);
    printf("Hobby \t\t\t: ");
    gets(hobbyz);
    printf("No. HP \t\t\t: ");
    gets(no_hpz);

    printf("Nama \t\t\t: %s\n", namaa);
    printf("NIM \t\t\t: %s\n", nimm);
    printf("Kelas Paralel \t\t: %s\n", kelazz);
    printf("Tempat/Tanggal Lahir \t: %s\n", tempattanggal_lahirz);
    printf("Alamat \t\t\t: %s\n", alamatz);
    printf("Hobby \t\t\t: %s\n", hobbyz);
    printf("No. HP \t\t\t: %s\n", no_hpz);

    return 0;
}