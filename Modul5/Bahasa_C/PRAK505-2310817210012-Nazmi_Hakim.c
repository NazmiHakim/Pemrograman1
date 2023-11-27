#include <stdio.h>
void Biodata(int A, char B[], char C[]){
int tahun_sekarang = 2023;
int usia = tahun_sekarang - A;

printf("Perkenalkan Nama Saya : %s\n", B);
printf("Umur Saya : %d\n", usia);
printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
printf("Asal Saya dari : %s\n", C);
}
int main() {
int tahunLahir;
 char Namaku[20], Asal[15];
 scanf(" %d",&tahunLahir);
 scanf(" %[^\n]%*c",&Namaku);
 scanf(" %[^\n]%*c",&Asal);
Biodata(tahunLahir, Namaku, Asal);
return 0;
}