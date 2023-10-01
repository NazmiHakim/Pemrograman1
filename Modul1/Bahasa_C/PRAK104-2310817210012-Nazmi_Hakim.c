#include<stdio.h>
int main(){
int ai=400000,be=350000,ce=13,de=21,ei= ai-(ai*ce/100),fi=be-(be*de/100);
printf("Harga sepatu A adalah %d\n", ai);
printf("Harga sepatu B adalah %d\n", be);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", ei);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", fi);
return 0;
}

