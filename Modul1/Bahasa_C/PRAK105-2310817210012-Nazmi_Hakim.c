#include<stdio.h>
int main(){
int a= 9, b= 5, c= 8, d= 8, e= a%b+c%d;
printf("Variabel a bernilai %d\n", a);
printf("Variabel b bernilai %d\n", b);
printf("Variabel x bernilai %d\n", c);
printf("Variabel y bernilai %d\n", d);
printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", e);
return 0;
}
