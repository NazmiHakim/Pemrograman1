#include <stdio.h>
int reverse(int angka){
    int dibalik = 0;
    while (angka > 0){
        dibalik = dibalik * 10 + angka % 10;
        angka /= 10;
}
return dibalik;
}
int main() {
 int A, B;
 scanf("%d %d",&A,&B);
 A=reverse(A);
 B=reverse(B);
 int C = A+B;
 printf("%d",reverse(C));
}