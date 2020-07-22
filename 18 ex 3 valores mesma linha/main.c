#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //leia 3 números inteiros de uma só vez e
    //salve a multiplicação dos 3 em uma variável
    //exiba a variável

    int num1, num2, num3, resultado;

    printf("\nDigite 3 números:\n");
    scanf("%d %d %d",&num1, &num2, &num3);

    resultado=num1*num2*num3;

    printf("\Resultado é: %d\n", resultado);

    return 0;
}
