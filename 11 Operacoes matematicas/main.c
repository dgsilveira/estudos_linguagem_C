#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//biblioteca acentuação

int main()
{
    setlocale(LC_ALL,"");//chamada de locale.h

    //variáveis
    int a = 6, b = 4;

    //soma
    printf("\nA soma de %d e %d = %d", a, b, a + b);

    //subtração
    printf("\nA subtração de %d e %d = %d", a, b, a - b);

    //divisão
    printf("\nA divisão de %d e %d = %d", a, b, a / b);

    //multiplicação
    printf("\nA multiplicação de %d e %d = %d", a, b, a * b);

    //resto da divisão
    printf("\nO resto da divisão de %d e %d = %d", a, b, a % b);

    //valor absoluto
    printf("\nO valor absoluto de %d = %d",-a, abs(-a));




    return 0;
}
