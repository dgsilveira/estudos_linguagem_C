#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 10, c = 15;

    if (a > 2){
        printf("\n%d e maior que 2", a);
    }

    if(c >= b){
        printf("\n%d e maior ou igual que %d", c, b);
    }

    if(a < 10){
        printf("\n%d e menor que 10", a);
    }

    if(a <= 10){
        printf("\n%d e menor ou igual a 10", a);
    }

    if(c != 10){
        printf("\n%d nao e 10", a);
    }
    return 0;
}
