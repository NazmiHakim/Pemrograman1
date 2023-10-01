#include<stdio.h>
#include<math.h>
int main(){
float waw = 9, wiw = 6, wuw = 10, wew=7, wow= (waw + wiw) * wuw / wew;
wow= ceilf(wow * 100) / 100;
int a = 9, b = 6, c = 10, d=7;
printf("Variabel a bernilai %d\n", a);
printf("Variabel b bernilai %d\n", b);
printf("Variabel x bernilai %d\n", c);
printf("Variabel y bernilai %d\n", d);
printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", wow);
return 0;
}