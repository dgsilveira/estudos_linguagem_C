#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//biblioteca acentua��o

int main()
{
    setlocale(LC_ALL,"");//chamada de locale.h

    //vari�veis
    int a = 6, b = 4;

    //soma
    printf("\nA soma de %d e %d = %d", a, b, a + b);

    //subtra��o
    printf("\nA subtra��o de %d e %d = %d", a, b, a - b);

    //divis�o
    printf("\nA divis�o de %d e %d = %d", a, b, a / b);

    //multiplica��o
    printf("\nA multiplica��o de %d e %d = %d", a, b, a * b);

    //resto da divis�o
    printf("\nO resto da divis�o de %d e %d = %d", a, b, a % b);

    //valor absoluto
    printf("\nO valor absoluto de %d = %d",-a, abs(-a));




    return 0;
}
