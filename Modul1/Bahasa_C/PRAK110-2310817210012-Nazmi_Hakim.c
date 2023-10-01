#include<stdio.h>
#include<math.h>
int main(){
    int a= 12, b= 5, c= sqrt(a*a + b*b );
    printf("Diketahui : \n");
    printf("Alas = %d cm\nTinggi = %d cm\n\n",b,a);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\nSisi B = %d cm\nSisi C = %d cm\n", a,c,b);
    printf("Keliling = %d cm\n", a+b+c);
    printf("Luas = %d cm", a*b/2);
}