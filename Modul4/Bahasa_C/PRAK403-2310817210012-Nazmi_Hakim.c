#include <stdio.h>
int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    int c, d;

    if (a <= b)
    {
        c = a;
        d = b;
        while (c <= b && d >= a)
        {
            printf("%d %d ", c, d);
            if (a != d || b != c)
            {
                printf("- ");
            }
              c++;
              d--;
        }
        
    }
    else
    {
        c = a;
        d = b;
        while (c >= b && a >= d)
        {
            printf("%d %d ", c, d);
            if (a != d || c != b)
            {
                printf("- ");
            }
            c--;
            d++;
        }
    }
    return 0;
}